# Author: Korawit Suporn
# Date: 23 Apr. 2025
# Editor: Vim

m = int(input())
d = int(input())

# winter

if ((m == 12 and d >= 21) or (m >= 1 and m <= 2) or (m == 3 and d < 21)):
    print("winter")
elif (m == 3 and d >= 21) or (m >= 4 and m <= 5) or (m == 6 and d < 21):
    print("spring")
elif (m == 6 and d >= 21) or (m >= 7 and m <= 8) or (m == 9 and d < 21):
    print("summer")
else:
    print("fall")
