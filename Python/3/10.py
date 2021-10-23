# Get input from user
num = int(input("Enter a number: "))

# Store num in original
original = num

# Initialize reverse to zero
reverse = 0

# Calculate reverse of original number
while num != 0:
    remainder = num % 10
    num = int(num / 10)
    reverse = (reverse * 10) + remainder

# print reverse of the original number
print("Reverse of {0} is {1}".format(original, reverse))
