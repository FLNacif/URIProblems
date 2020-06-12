valor = int(input())

for i in range(1,int(valor/2)+2):
    if(valor%i==0):
        print(i)
print(valor)