# Get input from user
num = int(input("Enter a number: "))

# Initialize sumofcubes to 0
sumofcubes = 0

# Loop through every digit in num
for digit in str(num):
    # Add cube of digit to sumofcubes
    sumofcubes += int(digit) ** 3

# Check if number is Armstrong number
if sumofcubes == num:
    print("This is an Armstrong number")
else:
    print("This is not an Armstrong number")

