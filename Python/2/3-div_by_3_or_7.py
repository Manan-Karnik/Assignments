#Get input from user
num = int(input("Enter a number: "))

# Check if number is divisible by 3 and 7
if (num % 3 == 0) and (num % 7 == 0):
    print("Number is divisible by 3 and 7")

# Check if number is divisible by 3
elif num % 3 == 0:
    print("Number is divisible by 3")

# Check if number is divisible by 7
elif num % 7 == 0:
    print("Number is divisible by 7")

# Number is not divisible by 3 or 7
else:
    print("Number is not divisible by 3 or 7")
