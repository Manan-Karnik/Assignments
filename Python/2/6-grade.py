# Get marks input from student
marks = int(input("Enter your marks: "))

# Check if marks are 80 or above
if marks >= 80:
    print("Grade: Honors")

# Check if marks are 60 or above
# (Not 80 or above if this elif is executed)
elif marks >= 60:
    print("Grade: First")

# Check if marks are 50 or above
# (Not 60 or above if this elif is executed)
elif marks >= 50:
    print("Grade: Second")

# Check if marks are 40 or above
# (Not 50 or above if this elif is executed)
elif marks >= 40:
    print("Grade: Third")

# Marks are below 40
else:
    print("Grade: Fail")
