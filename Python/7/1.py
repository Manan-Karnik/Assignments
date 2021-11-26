#Initialize dictionary
d = {"D":3, "B":5, "C":1, "A":4, "E":2}

# Store sorted values
sorted_values = sorted(d.values())

# Empty dictionary to store sorted results
sorted_d = {}

#Loop through sorted values
for i in sorted_values:
    # Loop through dictionary keys
    for k in d.keys():
        # Store key value pairs in sorted_d
        if d[k] == i:
            sorted_d[k] = d[k]
            break

# Print result
print("Unsorted dictionary", d, sep="\n")
print("Dictionary sorted by value", sorted_d, sep="\n")
