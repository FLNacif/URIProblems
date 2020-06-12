quantidade = int(input())

for i in range(quantidade):
    print(sum([int(r) for r in input().split(" ")]))