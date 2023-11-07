from collections import defaultdict
import math


def digit_sum(a):
    s = 0
    for i in a:
        s += int(i)
    return s

ans = 0
n = int(input())
arr = input().split()
