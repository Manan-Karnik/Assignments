# Initialize dictionary and get user input
d = {}
n = int(input("Enter number of keys: "));

# Add key: value to d from 1 to n
for i in range(1, n + 1):
    d[i] = i*i

# Print d
print(d)
