# Get input from user
num = int(input("Enter a number: "))

# Initialize rev as empty string
rev = ""

# Calculate reverse of number
for digit in str(num):
    rev = digit + rev

# print reverse of the original number
print("Reverse of {0} is {1}".format(num, rev))
