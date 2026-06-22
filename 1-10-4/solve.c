#include <stdio.h>
int main(void)
{
    int i, j;
    char NameList[2][2][51]; /* 1つめは名前ID, 2つめは情報ID, 3つめは文字列入力用 */

    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            if (j == 0)
            {
                printf("ID: %dの名前を入力(全角25文字まで)", i);
                scanf("%50s", NameList[i][j]);
            }
            else
            {
                printf("ID: %dの住所を入力(全角25文字まで)", i);
                scanf("%50s", NameList[i][j]);
            }
        }
    }

    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            if (j == 0)
            {
                printf("ID: %dの名前は%s\n", i, NameList[i][j]);
            }
            else
            {
                printf("ID: %dの住所は%s\n", i, NameList[i][j]);
            }
        }
    }
    return 0;
}
