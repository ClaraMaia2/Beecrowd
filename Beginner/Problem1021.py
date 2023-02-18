""" 
Read a value of floating point with two decimal places. This represents a monetary value. 
After this, calculate the smallest possible number of notes and coins on which the value 
can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins 
are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list 
of notes and the message “MOEDAS:” followed by the list of coins.

Input
    The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

Output
    Print the minimum quantity of banknotes and coins necessary to change the initial value.
"""
N = float(input())
bankNotes = [100, 50, 20, 10, 5, 2]
bankCoins = [1, 0.5, 0.25, 0.1, 0.05, 0.01]

print("NOTAS:")
for notes in bankNotes:
    note = int(N // notes)
    print("{} nota(s) de R$ {}.00".format(note, notes))
    N -= note * notes
#endfor

print("MOEDAS:")
for coins in bankCoins:
    coin = int(round(N, 2) // coins)
    print("{} moeda(s) de R$ {c:.2f}".format(coin, c = coins))
    N -= coin * coins
#endfor