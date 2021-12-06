# Incorrect code
'''
Value=30

for VAL in range(0,Value)
    if val%4==0:
        print(VAL*4)
    Elseif val%5==0:
        print(VAL+3)
    else
        print(VAL+10)
'''

# Corrected code
Value=30

for VAL in range(0,Value): #*
    if VAL%4==0: #*
        print(VAL*4)
    elif VAL%5==0: #*
        print(VAL+3)
    else: #*
        print(VAL+10)
