# -*- coding: utf-8 -*-

valor = float(input())
n100 = valor//100
valor = valor%100

n50 = valor//50
valor = valor%50

n20 = valor//20
valor = valor%20

n10 = valor//10
valor = valor%10

n5 = valor//5
valor = valor%5

n2 = valor//2
valor = valor%2

valor = valor*100

m100 = valor//100
valor = valor%100

m50 = valor//50
valor = valor%50

m25 = valor//25
valor = valor%25

m10 = valor//10
valor = valor%10

m5 = valor//5
valor = valor%5

m1 = valor

print("NOTAS:\n{:.0f} nota(s) de R$ 100.00\n{:.0f} nota(s) de R$ 50.00\n{:.0f} nota(s) de R$ 20.00\n{:.0f} nota(s) de R$ 10.00\n{:.0f} nota(s) de R$ 5.00\n{:.0f} nota(s) de R$ 2.00\nMOEDAS:\n{:.0f} moeda(s) de R$ 1.00\n{:.0f} moeda(s) de R$ 0.50\n{:.0f} moeda(s) de R$ 0.25\n{:.0f} moeda(s) de R$ 0.10\n{:.0f} moeda(s) de R$ 0.05\n{:.0f} moeda(s) de R$ 0.01".format(
  n100,
  n50,
  n20,
  n10,
  n5,
  n2,
  m100,
  m50,
  m25,
  m10,
  m5,
  m1
  ))