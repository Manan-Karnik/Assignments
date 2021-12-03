# Def function
def found(e, l):
    
    # Loop through l
    for i in l:
        # If element found return True
        if i == e:
            return True
        
    # Return false if element not found till end of list
    return False


# Declare lst
lst = ["Apple", "Ball", "Cat", "Dog"]

# Get input from user
element = input("Enter element to search: ")

# Call function and print result
if found(element, lst):
    print("{0} is in the list".format(element))
else:
    print("{0} is not in the list".format(element))
