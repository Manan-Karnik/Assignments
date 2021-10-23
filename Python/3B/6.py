# Required for math.sqrt() function
import math

for num in range(1, 101):
    # Initilize divisor to 2 and factor to 1
    divisor = 2
    factor = 0

    for divisor in range(2, int(math.sqrt(num))):
        # Check if remainder is zero
        if num % divisor == 0:
            # Increment factor and break
            factor += 1
            break

        # Increment divisor
        divisor += 1

    # Print num if prime
    if factor == 0 and num != 1:
        print(num)
