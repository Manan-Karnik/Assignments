# cont variable decides whether program should restart or terminate
cont = "yes"

while cont.casefold() == "yes":
    # Get input of 2 numbers from user
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))

    # Add the numbers and print the answer
    ans = num1 + num2
    print("The sum of two numbers is", ans)

    # Ask user whether they want to restart/continue the program
    cont = input("Do you want to continue? (yes/no): ")
    
else:
    print("This program is now closed")
