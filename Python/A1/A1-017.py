# Author: Korawit Suporn
# Date  : 23 Apr. 2025
# Editor: Vim

f1 = []
for _ in range(3):
    n = int(input())
    f1.append(n)
f2 = []
for _ in range(3):
    n = int(input())
    f2.append(n)

# year, month, day, 0, 1, 2

if (f1[0] < f2[0]) or (f1[0] == f2[0] and f1[0] < f2[0]) or (f1[0] == f2[0] and f1[1] == f2[1] and f1[2] < f2[2]):
    print(1)
elif f1 == f2:
    print(0)
else:
    print(2)
