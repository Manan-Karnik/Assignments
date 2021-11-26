# Initialize dictionary
d = {"A":1, "B":2, "C":3, "D":4}

# Get key input from user
ip_key = input("Enter key: ")

# Check if input key is in d and print result
if ip_key in d:
    print("Key {0} already exists".format(ip_key))
else:
    print("Key {0} does not exist".format(ip_key))
