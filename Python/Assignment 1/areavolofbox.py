length = float(input("Enter length of box :"))
breadth = float(input("Enter breadth of box :"))
height = float(input("Enter height  of box :"))

area = 2 * ((length * breadth) + (breadth * height) + (height * length))
volume = length * breadth * height

print("Area is", area)
print("Volume is", volume)
