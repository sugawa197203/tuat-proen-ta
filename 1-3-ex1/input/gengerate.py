import itertools

if __name__ == "__main__":
    values = [-1, 0, 1]
    for combination in itertools.product(values, repeat=3):
        with open(f"{combination[0]}{combination[1]}{combination[2]}.txt", "w") as f:
            f.write(f"{combination[0]} {combination[1]} {combination[2]}")
