# Get input from user
num = int(input("Enter a number: "))

# Initialize divisor to 1
divisor = 1

# Print the factors of num
print("Factors of {0} are:".format(num), end = " ")

while(divisor <= num):
    if(num % divisor == 0):
        print(divisor, end = "  ")
    divisor += 1
