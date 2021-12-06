salary = int(input("Enter salary: "))
service_years = int(input("Enter time period of service: "))

if service_years < 6:
    bonus = 0.05 * salary
    
elif service_years <= 10:
    bonus = 0.08 * salary
    
else:
    bonus = 0.1 * salary

print("Net bonus:", bonus)
