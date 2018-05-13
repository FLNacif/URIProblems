x,y = [float(x) for x in input().split()]

if(x==0):
    if(y==0):
        print("Origem")
    else:
        print("Eixo Y")
elif(y==0):
    print("Eixo X")
else:
    if(x>0):
        if(y>0):
            print("Q1")
        else:
            print("Q4")
    else:
        if(y>0):
            print("Q2")
        else:
            print("Q3")