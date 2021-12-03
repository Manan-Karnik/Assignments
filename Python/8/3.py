file = open("data.txt", "r")

for _ in range(10):
    print(file.readline())

file.close()
