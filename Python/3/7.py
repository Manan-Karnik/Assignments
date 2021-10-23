# Get input from user
num = int(input("Enter a number: "))

# Check if string of num is same even if reversed
if str(num) == str(num)[::-1]:
    print("{0} is a palindrome".format(num))
else:
    print("{0} is not palindrome".format(num))

##############################################

'''
# Get input from user
num = int(input("Enter a number: "))

# Initialize rev to zero and store num in original
rev = 0
original = num

# Calculate reverse of number
while num > 0:
    rem = num % 10
    rev = (rev * 10) + rem
    num = int(num / 10)

# Check if original is same as reverse
if original == rev:
    print("{0} is a palindrome".format(original))
else:
    print("{0} is not a palindrome".format(original))
'''
