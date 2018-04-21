import math
a,b,c = [float(x) for x in input().split()]
try:
  delta = math.sqrt(b*b-4*a*c)
  r1 = (-b+delta)/(2*a)
  r2 = (-b-delta)/(2*a)
  print("R1 = {:.5f}\nR2 = {:.5f}".format(r1,r2))
except:
  print("Impossivel calcular")