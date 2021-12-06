lines = []
count = 0

file = open("STORY.TXT", "w")
file.write("My first book was Me and 3 Page 8 of 11 My Family. It gave me chance to be known to the world.")
file.close()

file = open("STORY.TXT", "r")
for l in file:
    print(l, end = "")
    lines.append(l.casefold().split())
file.close()

for l in lines:
    for w in l:
        if w == "me" or w == "my":
            count += 1

print("\n\nOccurence of Me/My in file:", count)
