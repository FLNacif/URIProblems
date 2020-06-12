quantidade = int(input())

soma = 0
for i in range(quantidade):
    x,y = [int(i) for i in input().split(" ")]
    soma = soma + (x*y)

print(soma)