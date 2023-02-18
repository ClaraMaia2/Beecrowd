""" 
Read an integer value, which is the duration in seconds of a certain event in a factory, 
and inform it expressed in hours:minutes:seconds.

Input
    The input file contains an integer N.

Output
    Print the read time in the input file (seconds) converted in hours:minutes:seconds.
"""
N = int(input())

hours = N // 3600
minutes = (N % 3600) // 60
seconds = N % 60

print("{h}:{m}:{s}".format(h = hours, m = minutes, s = seconds))