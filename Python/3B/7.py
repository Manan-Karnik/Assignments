# Get input from user
num = int(input("Enter a number: "))

# Initialize rev as empty string
rev = ""

# Calculate reverse of number
for digit in str(num):
    rev = digit + rev

# Check if number is same as reverse
if num == int(rev):
    print("{0} is a palindrome".format(num))
else:
    print("{0} is not a palindrome".format(num))
