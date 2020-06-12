# -*- coding: utf-8 -*-

[s,t,f] = [int(i) for i in input().split(" ")]
s = 24 if s==0 else s

print((s+t+f)%24)