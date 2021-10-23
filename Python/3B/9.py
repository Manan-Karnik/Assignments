# Get input from user
num = int(input("Enter a number: "))

# Print the factors of num
print("Factors of {0} are:".format(num), end = " ")

for divisor in range(1, (num + 1)):
    if(num % divisor == 0):
        print(divisor, end = "  ")
