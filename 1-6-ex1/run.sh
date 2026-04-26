#!/bin/bash

# --- 初期設定 ---
# 必要なディレクトリとファイルを定義
INPUT_DIR="input"
CORRECT_OUTPUT_DIR="correctoutput"
TARGET_OUTPUT_DIR="output"
SOLVE_C="solve.c"
TARGET_C="target.c"
SOLVE_BIN="solve"
TARGET_BIN="target"
COMPILER="gcc"

# コマンドライン引数でコンパイラが指定された場合はそれを使用
if [ $# -ge 1 ]; then
    COMPILER="$1"
    # gcc か clang 以外が指定された場合はエラー
    if [[ "$COMPILER" != "gcc" && "$COMPILER" != "clang" ]]; then
        echo -e "\e[31mError: サポートされていないコンパイラ '$COMPILER' が指定されました。gcc または clang を指定してください。\e[0m"
        exit 1
    fi
fi

# 入力ディレクトリが存在するか確認
if [ ! -d "$INPUT_DIR" ]; then
    echo -e "\e[31mError: 入力ディレクトリ('$INPUT_DIR')が見つかりません。\e[0m"
    exit 1
fi

# 想定解（solve.c）が存在するか確認
if [ ! -f "$SOLVE_C" ]; then
    echo -e "\e[31mError: 想定解ファイル('$SOLVE_C')が見つかりません。\e[0m"
    exit 1
fi

# 採点対象コード（target.c）が存在するか確認
if [ ! -f "$TARGET_C" ]; then
    echo -e "\e[31mError: 採点対象コードファイル('$TARGET_C')が見つかりません。\e[0m"
    exit 1
fi

# 想定解の出力が存在するか確認
if [ ! -d "$CORRECT_OUTPUT_DIR" ]; then
    # --- 想定解の出力生成 ---
    echo "--- 想定解の出力ファイルを生成中 ---"
    mkdir -p "$CORRECT_OUTPUT_DIR"

    # 想定解をコンパイル
    $COMPILER "$SOLVE_C" -o "$SOLVE_BIN"
    if [ $? -ne 0 ]; then
        echo -e "\e[31mError: 想定解の '$SOLVE_C' のコンパイルに失敗しました。\e[0m"
        exit 1
    fi

    # inputディレクトリ内の各ファイルに対し、想定解を実行して出力を保存
    for input_file in "$INPUT_DIR"/*; do
        # .txt ファイルのみ処理するので、それ以外はスキップ
        if [[ "$input_file" != *.txt ]]; then
            continue
        fi
        if [ -f "$input_file" ]; then
            filename=$(basename "$input_file")
            output_file="$CORRECT_OUTPUT_DIR/${filename%.*}.txt"
            echo -e "入力ファイル: $filename -> 出力ファイル: $(basename "$output_file")"
            ./"$SOLVE_BIN" < "$input_file" > "$output_file"
        fi
    done
fi

# --- 採点対象コードの検証 ---
echo -e "\n--- 採点中 ---"
all_passed=true

# 採点対象コードをコンパイル
$COMPILER "$TARGET_C" -o "$TARGET_BIN"
if [ $? -ne 0 ]; then
    echo -e "\e[31mError: '$TARGET_C' のコンパイルに失敗しました。\e[0m"
    exit 1
fi

# inputディレクトリ内の各ファイルを入力として、採点対象コードを実行し、想定解と比較
mkdir -p "$TARGET_OUTPUT_DIR"
for input_file in "$INPUT_DIR"/*; do
    # .txt ファイルのみ処理するので、それ以外はスキップ
    if [[ "$input_file" != *.txt ]]; then
        continue
    fi
    if [ -f "$input_file" ]; then
        filename=$(basename "$input_file")
        correct_output="$CORRECT_OUTPUT_DIR/${filename%.*}.txt"
        target_output="$TARGET_OUTPUT_DIR/${filename%.*}.txt"

        # 採点対象コードを実行し、保存
        ./"$TARGET_BIN" < "$input_file" > "$target_output"

        # diffで比較
        if diff -q "$correct_output" "$target_output" > /dev/null; then
            echo -e "$filename:\e[32m Passed\e[0m"
        else
            echo -e "$filename:\e[31m Failed\e[0m"
            all_passed=false
        fi
    fi
done

# --- 結果の表示 ---
echo -e "\n--- 最終結果 ---"
if $all_passed; then
    echo -e "\e[32mすべてのテストケースに合格しました!\e[0m"
    exit 0
else
    echo -e "\e[31m残念ながら、一部のテストケースに不合格です。\e[0m"
    exit 1
fi
