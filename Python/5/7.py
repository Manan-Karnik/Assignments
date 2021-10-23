list_ = ["it", "in", "what", "at", "for", "a", "the", "an", "which", "when"]
new_list = []
n = 2

for word in list_:
    if len(word) > n:
        new_list.append(word)

print("List is", list_)
print("List with words longer than {0} characters is {1}".format(n, new_list))
