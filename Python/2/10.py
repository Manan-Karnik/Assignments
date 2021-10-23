#Get input from user
x = int(input("Enter value of x: "))

# Calculate the value of y depending on value of x
if x < 40:
    print("The value of y is", 4*x + 100)
elif x == 40:
    print("The value of y is", 300)
else:
    print("The value of y is", 4.5*x + 150)

