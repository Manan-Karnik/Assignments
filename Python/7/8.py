# Initialize dictionaries
d1 = {1:1, 2:2, 3:3}
d2 = {4:4, 5:5, 6:6}
print("Dictionaries:", d1, d2, sep="\n", end="\n\n")

# Merge dictionaries
d3 = {}

for item in d1, d2:
    d3.update(item)
    
print("Merged Dictionary:", d3, sep="\n")
