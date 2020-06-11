import math

x1,y1 = [float(x) for x in input().split()]
x2,y2 = [float(x) for x in input().split()]

print('{:.4f}'.format(math.sqrt((x1-x2)**2+(y1-y2)**2)))