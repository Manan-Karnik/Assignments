# Def function
def factorial(n):
    if n == 1 or n == 0:
        return 1
    elif n < 0:
        return "not possible"
    else:
        # return n * (n - 1) * ... * 3 * 2 * 1
        return n * factorial(n - 1)

# Get user input and print result
n = int(input("Enter a number: "))
print("Factorial of {0} is {1}".format(n, factorial(n)))
