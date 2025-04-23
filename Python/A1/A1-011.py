# Author: Korawit Suporn
# Date  : 23 Apr. 2025
# Editor: Vim

text = input()

lst = list(text)
selected = []

dp = -1

while dp != 4:
    dp += 1

    if lst[dp] not in selected:
        print(str(text.count(lst[dp]))+lst[dp], end = "")
        selected.append(lst[dp])

