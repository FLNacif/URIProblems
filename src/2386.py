abertura = int(input())
quantidade = int(input())

visivel = 0
for i in range(quantidade):
    fotons = int(input())
    if(fotons*abertura>=40000000):
        visivel = visivel + 1

print(visivel)