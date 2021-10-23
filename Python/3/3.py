# Get input from user
num = int(input("Enter a number: "))

# Store user input num in original 
original = num

# Initialize fact variable as 1
fact = 1

# Multiply num to fact and subtract 1 from num till num > 1
while num > 1:
    fact *= num
    num -= 1

# Print value of original number and its factorial
print("{0}! is {1}".format(original, fact))
