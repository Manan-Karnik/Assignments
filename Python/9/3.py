# Def function
def isPrime(n):
    # Declare variable
    num_factors = 0
    
    # Loop through 2 to n - 1
    for i in range(2, n):
        if n % i == 0:
            num_factors += 1

    # If factors are 0 n is prime
    if (num_factors == 0):
        return True
    else:
        return False


# Get input from user
num = int(input("Enter number: "))

# Call function and print result
if isPrime(num):
    print("{0} is a prime number".format(num))
else:
    print("{0} is not a prime number".format(num))
