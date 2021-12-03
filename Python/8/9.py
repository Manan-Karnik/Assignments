file = open("data.txt", "r")

words = []
len_chars = 0
len_lines = 0

for l in file:
    len_chars += len(l)
    words += l.split()
    len_lines += 1

print("Characters: {0}\nWords: {1}\nLines: {2}".format(len_chars, len(words), len_lines))

file.close()
