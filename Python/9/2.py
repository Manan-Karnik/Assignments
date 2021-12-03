# Def function
def isPerfect(n):
    # Declare variable
    sum_factors = 0
    
    # Loop through 1 to n - 1
    for i in range(1, n):

        # Add i to sum_factors if n is perfectly divisible by i
        if n % i == 0:
            sum_factors += i

    # If sum of factors is equal to n, n is perfect number
    if (sum_factors == n):
        return True
    else:
        return False

# Get input from user
num = int(input("Enter number: "))

# Call function and print result
if isPerfect(num):
    print("{0} is a perfect number".format(num))
else:
    print("{0} is not a perfect number".format(num))
