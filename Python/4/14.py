# Get input from user
ip_str = input("Enter a string: ")
ip_substr = input("Enter substring: ")

# Calculate occurrence of substring
occurrence = ip_str.count(ip_substr)

print("'{0}' occurs in '{1}' {2} times".format(ip_substr, ip_str, occurrence))
