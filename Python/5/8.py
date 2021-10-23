list1 = ["Peach", "Yellow", "Orange", "Green", "Blue"]
list2 = ["Apple", "Mango", "Banana", "Orange", "Peach"]
common_list = []

for i in list1:
    for j in list2:
        if i == j and i not in common_list:
            common_list.append(i)

print("First list is", list1)
print("Second list is", list2)
print("Common elements in both list are", common_list)
