# Get input from user
num = int(input("Enter a number: "))

# Check if string of num is same even if reversed
if str(num) == str(num)[::-1]:
    print("{0} is a palindrome".format(num))
else:
    print("{0} is not palindrome".format(num))
