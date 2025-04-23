# Author: Korawit Suporn
# Date  : 23 Apr. 2025
# Editor: Vim

arr = [int(input()) for _ in range(3)]

if sum(arr) / arr[0] == 3:
    print("all the same")
elif arr[0] == arr[1] or arr[1] == arr[2] or arr[0] == arr[2]:
    print("neither")
else:
    print("all different")
