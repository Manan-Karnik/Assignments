cont = "yes"

for _ in iter(int, 1):
    if cont.casefold() == "yes":
        num1 = int(input("Enter first number: "))
        num2 = int(input("Enter second number: "))

        ans = num1 + num2
        print("The sum of two numbers is", ans)
        cont = input("Do you want to continue? (yes/no): ")
    else:
        print("This program is now closed")
        break
