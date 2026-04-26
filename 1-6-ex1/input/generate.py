import random

count = 1

def generate(x1, y1, x2, y2, x3, y3):
    global count
    with open(f"{count}.txt", "w") as f:
        f.write(f"{x1} {y1} {x2} {y2} {x3} {y3}\n")
    count += 1

if __name__ == "__main__":
    generate(0, 0, 1, 0, 0, 1)
    generate(0, 0, 2, 0, 0, 2)
    generate(1, 1, 2, 1, 1, 2)
    generate(-1, -1, 1, 1, 1, -1)
    generate(-1, -1, -2, -2, -1, -2)
    generate(-1, -1, -2, -1, -1, -2)
    for _ in range(10):
        x1 = random.uniform(-10, 10)
        y1 = random.uniform(-10, 10)
        x2 = random.uniform(-10, 10)
        y2 = random.uniform(-10, 10)
        x3 = random.uniform(-10, 10)
        y3 = random.uniform(-10, 10)
        generate(x1, y1, x2, y2, x3, y3)
