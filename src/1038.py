a,b = [int(x) for x in input().split()]
preco = 0
if(a==1):
  preco = 4
elif(a==2):
  preco = 4.5
elif(a==3):
  preco = 5
elif(a==4):
  preco = 2
elif(a==5):
  preco = 1.5

print("Total: R$ {:.2f}".format(preco*b))