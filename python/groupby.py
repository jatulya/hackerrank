from itertools import groupby
num = input()
numlist = [int(i) for i in num]

groupedList = groupby(numlist)

for key, group in groupedList:
    print(f"({len(list(group))}, {key})", end=" ")