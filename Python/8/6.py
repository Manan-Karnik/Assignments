file = open("data.txt", "r")

lines = file.readlines()
print("4th line:", lines[3], sep = "\n")

file.close()
