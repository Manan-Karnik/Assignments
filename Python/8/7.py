file = open("data.txt", "r")

lines = file.readlines()
print("last line:", lines[-1], sep = "\n")

file.close()
