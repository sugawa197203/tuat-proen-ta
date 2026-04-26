import random

count = 0

def export(lines, n):
    global count
    with open(f"{count}.txt", "w") as f:
        f.write(f"{n}\n")
        for line in lines:
            f.write(f"{line}\n")

def edit():
    i = random.randint(0, 100)
    t = random.randint(1, 3)
    return f"{i} {t}"

def types():
    return str(random.randint(1, 3))

if __name__ == "__main__":
    for _ in range(20):
        N = random.randint(1, 300)
        lines = []
        contain = set()
        for _ in range(N):
            t = random.randint(1, 3)
            lines.append(str(t))
            if t == 1:
                lines.append(edit())
            elif t == 2:
                lines.append(types())

        export(lines, N)
        count += 1
