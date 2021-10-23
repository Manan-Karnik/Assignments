# Get input from user
num = int(input("Enter a number: "))

# Initialize empty string
string = ""

# Loop through digits in num and add to string
for digit in str(num):
    string += digit + " "

print(string)
