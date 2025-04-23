# Author: Korawit Suporn
# Date  : 23 Apr. 2025
# Editor: Vim

ch = input()
ps = input()

collection = ['H', "4567"]

if ch in collection and ps in collection:
    print("safe unlocked")
elif ps in collection:
    print("safe locked - change char")
elif ch in collection:
    print("safe locked - change digit")
else:
    print("safe locked")
