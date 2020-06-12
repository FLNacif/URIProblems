# -*- coding: utf-8 -*-

def print_odds(n):
    [print(i) for i in range(1,n+1) if i%2!=0]

quantidade = int(input())
print_odds(quantidade)