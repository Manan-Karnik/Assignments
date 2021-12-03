# Def function
def sub(l):
    # Loop through length of list
    for i in range(len(l)):
        # Unpack tuple
        [*vals] = l[i]

        # Loop through tuple at ith position in list
        for j in range(len(l[i])):
            # Replace each element in tuple with element - 1
            # One element is replaced in one iteration
            # Since tuple are immutable
            # New tuple is formed in every iteration
            l[i] = l[i][:j]+(vals[j] - 1,) + l[i][j+1:]
            
    return l


# Declare lst and print result
lst = [(100, 200, 300, 600), (300, 400, 120, 150, 50), (340, 280, 920), (460, 270)]
print("Original tuple list:\n{0}".format(lst))
print("\nSubtracted tuple list:\n{0}".format(sub(lst)))
