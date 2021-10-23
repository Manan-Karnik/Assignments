# Get input from user
ip_str = input("Enter a string: ")

if len(ip_str) > 2:
    # Output is first 2 and last 2 characters
    op_str = ip_str[:2] + ip_str[-2:]
    print("First and last 2 characters are '{0}'".format(op_str))
    
else:
    print("String is 2 characters or less")
