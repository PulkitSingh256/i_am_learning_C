#!/usr/bin/python

inp = int(raw_input("give me number: "))

for i in range(2,inp):
    if ((inp % i)==0):
        print("Not Prime")
        break
    else:
        print("Prime")
        break
