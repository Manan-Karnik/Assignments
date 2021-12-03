file = open("data.txt", "r")

for i in range(10):
    print("({0})".format(i + 1), file.readline())

file.close()
