# Get input from user
num = int(input("Enter a number: "))

# Initialize sumofcubes to 0
sumofcubes = 0

# Store user input num in original
original = num

while num != 0:
    # Find the digit, divide num by 10
    # and add cube of digit to sumofcubes
    digit = num % 10
    num = int(num / 10)
    sumofcubes += digit ** 3

if sumofcubes == original:
    print("This is an Armstrong number")
else:
    print("This is not an Armstrong number")
