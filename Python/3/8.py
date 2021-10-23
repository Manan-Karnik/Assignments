# Get input from user
num = int(input("Enter a number: "))

# Initialize additon and divisor to 0 and 1 respectively
addition = 0
divisor = 1

# Add the factors of num and store in addition
while(divisor < num):
    if(num % divisor == 0):
        addition += divisor
    divisor += 1

# If addition is equal to the number a it is perfect number
if(addition == num):
    print("{0} is a perfect number".format(num))
else:
    print("{0} is not a perfect number".format(num))
