data = [53, 35, 93, 92, 20, 64, 38, 15, 42, 12, 53, 48, 11, 79, 33, 14, 99, 81, 38, 30]

print("Unsorted data:", data, sep = "\n")
for step in range(len(data)):
    swapped = False
    
    for i in range(len(data) - step - 1):
        if data[i] > data[i + 1]:
            tmp = data[i]
            data[i] = data[i + 1]
            data[i + 1] = tmp
            swapped = True

    if not swapped:
        break

print("\nSorted data:", data, sep = "\n")
