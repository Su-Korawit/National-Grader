# Author: Korawit Suporn
# Date  : 23 Apr. 2025
# Editor: Vim

n = int(input())

if n > 9 or n == 0:
    print("Error : Out of range")
elif n < 0:
    print("Error : Please input postive number")
else:
    while n:
        if n == 9:
            print('IX', end = "")
            n -= 9

        elif n >= 5:
            print('V', end = "")
            n -= 5

        elif n == 4:
            print("IV", end = "")
            n -= 4
        else:
            print('I', end = "")
            n -= 1
