#!/usr/bin/python

while True:
    timein = raw_input("Enter Time in hr:min:sec:milsec  : ")
    ss=[]
    ss.append(timein)
    for i in ss:
        i=i.split(":")
        hour=i[0]
        min=i[1]
        sec=i[2]
        millisec=i[3]
        hours = float(hour) + (float(min)/60) + (float(sec)/3600) + (float(millisec)/3600000)
        print"%.9f" % (hours)
        ss.pop()
