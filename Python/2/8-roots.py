# Import math module to calculate square root
import math

# Get the values of a, b and c of quadratic equation from user
a = float(input("Enter value of a in equation: "))  
b = float(input("Enter value of b in equation: "))  
c = float(input("Enter value of c in equation: "))  

# Calculate the determinant
determinant = (b**2) - (4*a*c)

# Check if roots are real and calulate the answer
if determinant >= 0:
    root1 = (-b - math.sqrt(determinant))/(2*a)  
    root2 = (-b + math.sqrt(determinant))/(2*a)  
    print("The roots are {0} and {1}".format(root1, root2))

# Roots are not real
else:
    print("Roots are not real")
