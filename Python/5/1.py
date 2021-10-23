salaries = input("Enter salaries of employees: ")
salaries = salaries.split()

print("List of salaries is", salaries)
print("Minimum salary is {0}\nMaximum salary is {1}".format(min(salaries), max(salaries)))
