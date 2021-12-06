import datetime

def getInput():
    name = input("Enter your name: ")
    age = input("Enter your age: ")
    gender = input("Enter your gender: ")
    class_ = input("Enter class (First, Second, Third): ")
    src = input("Enter start station: ")
    dst = input("Enter end station: ")
    cost = int(input("Enter cost of pass: "))
    duration = int(input("Enter duration of pass (in days): "))
    return [name, age, gender, class_, src, dst, cost, duration]


def printPass(data):
    issue = datetime.datetime.now()
    expiry = datetime.datetime.now() + datetime.timedelta(days=data[7])
    
    print("\n================Railway Pass================")
    print("Printed on", issue.strftime("%A, %d/%m/%Y, %H:%M:%S"))
    print("\nName: {0}\t\tAge: {1}".format(data[0], data[1]))
    print("Gender: {0}\t\t{1} Class".format(data[2], data[3]))  
    print("{0} - {1}\t\tRs. {2:.2f}".format(data[4], data[5], float(data[6])))
    print("\nValid from {0} to {1}".format(issue.strftime("%d/%m/%Y"), expiry.strftime("%d/%m/%Y")))
    


ip = getInput()

printPass(ip)
