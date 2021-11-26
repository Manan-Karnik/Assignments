# Declare and initialize tup variable
tup = (2, 76, 32, 56, 4, 78, 91)

# Unpack tuple and store values in a list
[*unpacked_values] = tup

# Iterate through the list and print the values
for num in unpacked_values:
    print(num)
