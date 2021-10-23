# Get input from user
num = int(input("Enter a number: "))

# Initialize factorial to num 
factorial = num

# Multiply i to factorial [i = 1, 2, ..., (num – 1)]
for i in range(1, num):
    factorial *= i

# Print number and factorial
print("{0}! is {1}".format(num, factorial))
