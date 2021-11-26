# Declare and initialize lst
lst = [(15, 51, 38), (26, 82, 99), (75, 15, 47)]

# For tup in lst slice till second last element and add (77,) tuple to it
lst = [tup[:-1] + (77,) for tup in lst]

# Print updated lst
print(lst)
