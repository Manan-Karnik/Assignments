file = open("data.txt", "r")

print("String from 10th character:\n")
string = ""

for line in file:
    string += line

string = string[9:]
print(string)

file.close()
