# Get input from user
num = int(input("Enter a number: "))
# Declare empty string variable
string = ""

# While num is not zero store remainder in digit,
# divide num by 10 and add digit to string
while num != 0:
    digit = num % 10
    num = int(num / 10)
    string += " " + str(digit)

# Print reversed string
print(string[::-1])
