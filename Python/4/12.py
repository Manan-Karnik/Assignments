# Get input from user
ip_str = input("Enter a string: ")


# Print same string if length < 3
if len(ip_str) < 3:
    op_str = ip_str

# Else if add 'ly' if string ends with 'ing'
elif ip_str[-3:] == "ing":
    op_str = ip_str + "ly"

# Else add 'ing'
else:
    op_str = ip_str + "ing"

print(op_str)
