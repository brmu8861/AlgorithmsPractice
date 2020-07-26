"""
Solution to List Comprehensions
https://www.hackerrank.com/domains/python
"""
import math
import os
import random
import re
import sys
import textwrap

def hello_world():
    """Print Hello, World! to stdout."""
    return "Hello, World!"

def if_odd(n):
    """Print Weird if the number is weird. Otherwise, print Not Weird."""
    if n%2 == 1:
        return "Weird"
    if n%2 == 0 and n in range(2,6):
        return "Not Weird"
    if n%2 == 0 and n in range (6,21):
        return "Weird"
    if n%2 == 0 and n > 20:
        return "Not Weird"

def sum_diff_prod(a, b):
    """
    The provided code stub reads two integers from STDIN, and

    . Add code to print three lines where:

    The first line contains the sum of the two numbers.
    The second line contains the difference of the two numbers (first - second).
    The third line contains the product of the two numbers.

    """
    return a+b, a-b, a*b

def division(a, b):
    """
    The provided code stub reads two integers, a and b, from STDIN.

    Add logic to print two lines. The first line should contain the result of integer division,
    a//b . The second line should contain the result of float division, a/b
    No rounding or formatting is necessary.
    """
    return a//b, a/b

def loops(n):
    """
    The provided code stub reads and integer, n. from STDIN. 
    For all non-negative integers i < n print i^2
    """
    i_list = []
    for i in range(n):
        i_list.append(i*i)
    return i_list

def is_leap(year):
    """
    An extra day is added to the calendar almost every four years as February 29, and the day is called a leap day. It corrects the calendar for the fact that our planet takes approximately 365.25 days to orbit the sun. A leap year contains a leap day.

    In the Gregorian calendar, three conditions are used to identify leap years:

        The year can be evenly divided by 4, is a leap year, unless:
            The year can be evenly divided by 100, it is NOT a leap year, unless:
                The year is also evenly divisible by 400. Then it is a leap year.

    """
    leap = False
    
    if year % 4 == 0:
        if year % 100 == 0 and year % 400 == 0:
            leap = True
        if year % 100 == 0 and year % 400 != 0:
            leap = False
        else:
            leap = True
    else:
        leap = False
    
    return leap

def print_list(n):
    """
    Print the list of integers from 1 through n as a string, without spaces.
    """
    lst = ""
    for i in range(1,n+1):
        lst = lst + str(i)
    return lst

def wrap(string, max_width):
    return textwrap.fill(string, width=max_width)