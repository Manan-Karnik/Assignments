# Required for math.sqrt()
import math

# Get input from user
num = int(input("Enter a number: "))

# Loop from 2 till root of num
for divisor in range(2, (int(math.sqrt(num)) + 1)):
    # If remainder zero then num is not prime. Break
    if num % divisor == 0:
        print("Number is not prime")
        break
else:
    print("Number is prime")
