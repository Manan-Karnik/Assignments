# Get marks of Physics, Chemistry and Maths from candidate
maths = int(input("Enter marks in Maths: "))
phy = int(input("Enter marks in Physics: "))
chem = int(input("Enter marks in Chemistry: "))

# Check a, b, c and d and print whether candidate is eligible
if maths > 60 and phy > 50 and chem > 40 and (maths + phy + chem >= 200 or maths + phy >= 150):
    print("Candidate is eligible")
else:
    print("Candidate is ineligible")
