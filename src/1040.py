n1,n2,n3,n4 = [float(x) for x in input().split()]
media = (n1*2+n2*3+n3*4+n4*1)/10
print("Media: {:.1f}".format(media))
if(media>=7):
    print("Aluno aprovado.")
elif(media<5):
    print("Aluno reprovado.")
else:
    print("Aluno em exame.")
    vs = float(input())
    print("Nota do exame: {:.1f}".format(vs))
    novamedia = (media+vs)/2
    if(novamedia<5):
        print("Aluno reprovado.")
    else:
        print("Aluno aprovado.")
    print("Media final: {:.1f}".format(novamedia))