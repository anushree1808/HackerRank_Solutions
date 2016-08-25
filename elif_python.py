#!/bin/python

import sys


N = int(raw_input().strip())
if (N%2 !=0):
    print "Weird"
elif (N <=5 and N>=2):
    print "Not Weird"
elif (N>=6 and N<=20):
    print "Weird"
else:
    print "Not Weird"
