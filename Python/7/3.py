# Initialize dictionaries
d1 = {1:1, 2:2, 3:3}
d2 = {4:4, 5:5, 6:6}
print("Dictionaries:", d1, d2, sep="\n", end="\n\n")

# Concatenate dictionaries
d3 = {**d1, **d2}
print("Concatenated Dictionary:", d3, sep="\n")
