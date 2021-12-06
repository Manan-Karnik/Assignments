s1 = int(input("Enter side 1 of triangle: "))
s2 = int(input("Enter side 2 of triangle: "))
s3 = int(input("Enter side 3 of triangle: "))

if s1 == s2 == s3:
    print("Triangle is equilateral")
    
elif s1 == s2 or s2 == s3 or s3 == s1:
    print("Triangle is isosceles")
    
else:
    print("Triangle is scalene")
