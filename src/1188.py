def soma(vetor):
    return sum(vetor)

def media(vetor):
    return sum(vetor)/len(vetor)

op = input()
vetor = []
for i in range(144):
    entrada = input()
    if i+1 in [90,91,101,102,103,104,112,113,114,115,116,117,123,124,125,126,127,128,129,130,134,135,136,137,138,139,140,141,142,143]:
        vetor.append(float(entrada))

if(op == 'S'):
    print("%.1f"%soma(vetor))
else:
    print("%.1f"%media(vetor))
