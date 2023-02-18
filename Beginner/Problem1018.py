""" 
In this problem you have to read an integer value and calculate the smallest possible number of banknotes 
in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 e 1. Print the read 
value and the list of banknotes.

Input
    The input file contains an integer value N (0 < N < 1000000).

Output
    Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the 
    given example. Do not forget to print the end of line after each line, otherwise you will receive 
    “Presentation Error”.
"""
N = int(input())
bankNotes = [100, 50, 20, 10, 5, 2, 1]
note = []

print(N)

for notes in bankNotes:
    counts = N // notes
    note.append(counts)
    N -= counts * notes
#endfor

for i in range(len(bankNotes)):
    print("{} nota(s) de R$ {},00".format(note[i], bankNotes[i]))
#endfor