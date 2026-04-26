import random

if __name__ == "__main__":
    for _ in range(10):
        a = random.randint(1, 100)
        b = random.randint(1, a)
        with open(f"{a}_{b}.txt", "w") as f:
            f.write(f"{a} {b}\n")
