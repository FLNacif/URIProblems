x = int(input())

while x != 0:
    pares = 0
    soma = 0
    while pares<5:
        if(x%2==0):
            soma+=x
            pares+=1
        x+=1
    print(soma)
    x = int(input())