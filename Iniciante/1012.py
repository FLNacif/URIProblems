a,b,c = [float(x) for x in input().split()]

print('TRIANGULO: {:.3f}\nCIRCULO: {:.3f}\nTRAPEZIO: {:.3f}\nQUADRADO: {:.3f}\nRETANGULO: {:.3f}'.format(
    a*c/2.0,
    3.14159*c**2,
    ((a+b)*c)/2,
    b**2,
    a*b
))