# Get input from user
ip_str = input("Enter a string: ")

# Swap first and last character of input 
op_str = ip_str[-1] + ip_str[1:-1] + ip_str[0]

print("String with first and last letter swapped is", op_str)
