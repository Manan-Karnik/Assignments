# Program to count the number of each vowel in a string without dictionary

# List to store vowel and their count
vowels = "aeiou"
count = [0, 0, 0, 0, 0]

# Get input from user
ip_str = input("Enter a string: ")

# Make it suitable for caseless comparison
ip_str = ip_str.casefold()

# count the vowels
for char in ip_str:
   if char in vowels:
       count[vowels.index(char)] += 1

for i in range(len(vowels)):
    print("{0}: {1}".format(vowels[i], count[i]), end="\t")
