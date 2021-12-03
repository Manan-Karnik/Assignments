# Def function
def printPrime(n):
    # Loop through 2 to n + 1
    for i in range(2, n + 1):
        # (Re)set num_factors to 0
        num_factors = 0

        # Check number of factors of each num (except 1 and itself)
        for j in range(2, i): 
            if i % j == 0:
                num_factors += 1

        # If no factors except 1 and itself num is prime        
        if num_factors == 0:
            print(i)

# Call function with n as 100
printPrime(100)
