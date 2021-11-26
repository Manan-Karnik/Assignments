# Initialize dictionary
d = {"Phy Dept": ["Miss. A", "Mr. B", "Prof. C"],
     "Chem Dept": ["Miss. D", "Mrs. E", "Mr. F", "Mr. G"],
     "CS Dept": ["Prof. H", "Miss. I", "Mr. J", "Prof. K"]}

# Loop through dictionary
for dept in d:
    print("{0}:".format(dept))

    # For element in value list print element
    for staff in d[dept]:
        print(staff)
    print("")
