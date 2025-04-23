# Author : Korawit Suporn
# Problem: A1-002
# Date   : 22 Apr. 2025
# Editer : Vim
n = int(input())

c = 10 # 10 bath

while c:
    print(c, "=", n // c)
    n -= c * (n // c)
    c = c // 2 # 10, 5, 2, 1
