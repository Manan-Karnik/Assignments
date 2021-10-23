# Get input from user
ip_str = input("Enter a string: ")
characters = {}

# Count character frequency
for char in ip_str:
    if char not in characters:
        characters[char] = 1
    else:
        characters[char] += 1

print("The frequency of characters in the string is:\n",characters)
