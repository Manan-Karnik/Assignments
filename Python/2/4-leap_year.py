#Get input from user
year = int(input("Enter a year: "))

# Check if input year is a leap year
if year % 400 == 0 or year % 4 == 0 and year % 100!= 0:
    print("It is a leap year")
else:
    print("It is not a leap year")

