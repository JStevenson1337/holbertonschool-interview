#!/usr/bin/python3
# *~ UTF8 ~* #

"""
there is a single character H. Your text editor can execute only two
operations in this file: Copy All and Paste. Given a number n,
write a method that calculates the fewest number of operations
needed to result in exactly n H characters in the file.

"""
import sys
def minOperations(n):
    count= ['H']
    current = ['H']
    iteration = 0

    if n <= 1 or isinstance(n, int) is False:
        return 0
    elif n > sys.maxsize:
        count = 1
        current = 1
        while count < n:
            if (n % (count * 2) == 0) or (n % count == 0):
                current = count
                count * 2
                iteration += 2
            else:
                count += current
                iteration += 1
    else:
        while len(count) < n:
            double = (2 * len(count))
            if (n % double == 0):
                current = list(count)
                count.extend(count)
                iteration += 2
            elif (n % len(count) == 0):
                current = list(count)
                count.extend(count)
                iteration += 2
            else:
                count.extend(current)
                iteration += 1
    return iteration