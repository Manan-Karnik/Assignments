file = open("data.txt", "r")

lines = file.readlines()

for line in reversed(lines):
    print(line)

file.close()
