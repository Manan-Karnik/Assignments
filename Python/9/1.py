# Def function
def isArmstrong(n):
    # Declare variable
    sum_cubes = 0

    # Loop through digits in n and add their cubes
    for digit in str(n):
        sum_cubes += int(digit) ** 3

    # If sum of cubes is equal to n then it is armstrong
    if (sum_cubes == n):
        return True
    else:
        return False


# Get input from user
num = int(input("Enter number: "))

# Call function and print result
if isArmstrong(num):
    print("{0} is an armstrong number".format(num))
else:
    print("{0} is not an armstrong number".format(num))
