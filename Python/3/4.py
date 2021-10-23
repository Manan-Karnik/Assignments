# Required for math.sqrt() function
import math

# Get input from user
num = int(input("Enter a number: "))

# Initilize divisor as 2
divisor = 2

# Till divisor < square root of num
while divisor <= int(math.sqrt(num)):
    # If remainder is zero number is not prime
    if num % divisor == 0:
        print("Number is not prime")
        break
    
    # Increment divisor by 1
    divisor += 1

# If num % divisor is not zero number is prime
else:
    print("Number is prime")
