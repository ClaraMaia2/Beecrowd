""" 
Read an integer value corresponding to a person's age (in days) and print it in years, months and days, 
followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.

Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. 
In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 
or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.

365 days - 12 meses
400 days - x meses

Input
    The input file contains 1 integer value.

Output
    Print the output.
"""
age = int(input())

year = age // 365
age %= 365

month = age // 30
age %= 30

print("{y} ano(s)\n{m} mes(es)\n{d} dia(s)".format(y = year, m = month, d = age))