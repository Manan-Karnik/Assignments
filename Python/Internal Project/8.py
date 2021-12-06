file = open("STORY.TXT", "w")
file.write("Updated information As simplified by official websites.")
file.close()

file = open("STORY.TXT", "r")
chars = []

for line in file:
    print(line, end = "")
    for c in line.casefold():
        chars.append(c)
file.close()

def EUCount():
    count_a = 0
    count_m = 0
    for c in chars:
        if c == "a":
            count_a += 1
        if c == "m":
            count_m += 1

    print("\n\nA or a:{0}, M or m:{1}".format(count_a, count_m))



    
EUCount()
