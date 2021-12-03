# Def function
def printDict(d):
    print("Contents of dictionary")
    # Loop through d and print key and value
    for key in d:
        print("Key: {0}, Value: {1}".format(key, d[key]))

# Declare dictionary and call function
dictionary = {1:"a", 2:"b", 3:"c", 4:"d", 5:"e", 6:"f"}
printDict(dictionary)
