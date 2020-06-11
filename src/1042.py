num = [int(x) for x in input().split()]
numoriginal = [x for x in num]

num.sort()
for n in num:
    print(n)
print()
for n in numoriginal:
    print(n)