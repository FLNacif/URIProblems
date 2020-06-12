linhas = int(input())

firme = "-"
fraco = "."

mapa = []
distancia = 0
pulos = 0
falha = False
for i in range(linhas):
    linha_atual = input()
    if firme in linha_atual:
        if distancia > 0 and distancia<=2:
            pulos+=1
        distancia = 0
    else:
        if(distancia>=2):
            falha = True
            break
        distancia+=1

if distancia > 0 and distancia<=2:
    pulos+=1
if falha:
    print("N")
else:
    print(pulos)