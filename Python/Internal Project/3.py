# Def function
def fact(n):
    if n == 0 or n == 1:
        return 1
    elif n < 0:
        return "not possible"
    else:
        return n * fact(n - 1)

# Def function
def isArmstrong(n):
    len_n = len(str(n))
    add = 0

    for digit in str(n):
        add += int(digit) ** len_n

    if add == n:
        return True
    else:
        return False


def isPerfect(n):
    sum_factors = 0
    
    for i in range(1, n):
        if n % i == 0:
            sum_factors += i
        
    if (sum_factors == n):
        return True
    else:
        return False

while(True):
    print("1: Find factorial of number\n2: Check whether number is Armstrong")
    print("3: Check whether number is perfect\n4: Exit")
    choice = int(input("Enter your choice: "))

    if choice == 1:
        num = int(input("Enter number to find factorial: "))
        print("Factorial of {0} is {1}".format(num, fact(num)))
        
    elif choice == 2:
        num = int(input("Enter number to check whether Armstrong: "))
        if isArmstrong(num):
            print("{0} is an Armstrong number".format(num))
        else:
            print("{0} is not an Armstrong number".format(num))

    elif choice == 3:
        num = int(input("Enter number to check whether perfect: "))
        if isPerfect(num):
            print("{0} is an perfect number".format(num))
        else:
            print("{0} is not an perfect number".format(num))

    elif choice == 4:
        print("\nProgram terminated")
        break

    else:
        choice = int(input("\nInvalid choice, please try again: "))
    print("\n")

    

    

