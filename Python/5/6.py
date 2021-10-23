list_ = ["apple", "orange", "mango", "apple", "banana", "pear", "mango"]
new_list = []

for element in list_:
    if element not in new_list:
        new_list.append(element)

print("Original list is", list_)
print("List without duplicate is", new_list)
