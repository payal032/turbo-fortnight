#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the taumBday function below.
def taumBday(b, w, bc, wc, z):
    
    
    cost = 0
    if (((bc+z)*w)<(wc*w)):
        cost = bc*b + (bc+z)*w
    elif (((wc+z)*b)<(bc*b)):
        cost = (wc+z)*b + wc*w
    else:
        cost = bc*b + wc*w
    return cost

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        bw = input().split()

        b = int(bw[0])

        w = int(bw[1])

        bcWcz = input().split()

        bc = int(bcWcz[0])

        wc = int(bcWcz[1])

        z = int(bcWcz[2])

        result = taumBday(b, w, bc, wc, z)

        fptr.write(str(result) + '\n')

    fptr.close()
