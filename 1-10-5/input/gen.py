import random

counter = 12
count = 20

texts = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"

def output(t:str, name:str):
    with open(f"r-{name}-same.txt", "w") as f:
        f.write(t)
        f.write("\n")
        f.write(t)
    
    with open(f"r-{name}-diff.txt", "w") as f:
        f.write(t)
        f.write("\n")
        f.write("".join(random.choices(texts, k=len(t))))

for i in range(counter, counter + count):
    size = random.randint(5, 10)
    text = "".join(random.choices(texts, k=size))
    output(text, f"{i}")