import random

alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

count = 20

for i in range(count):
    with open(f"r-{i}.txt", "w") as f:
        for _ in range(5):
            name1 = "".join(random.choices(alphabet, k=random.randint(5, 10)))
            name2 = "".join(random.choices(alphabet, k=random.randint(5, 10)))
            f.write(f"{name1} {name2}\n")

