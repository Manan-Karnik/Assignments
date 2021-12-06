data = [{"V":"S001"}, {"V":"S002"}, {"VI":"S001"},
     {"VI":"S005"}, {"VII":"S005"}, {"V":"S009"}, {"VIII":"S007"}]

result = []

for d in data:
    for key in d.keys():
        if d[key] not in result:
            result.append(d[key])

print("Unique values: {0}".format("{%s}" % str(result).strip("[]")))

