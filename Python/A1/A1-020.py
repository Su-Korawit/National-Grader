# Author: Korawit Suporn
# Date  : 23 Apr. 2025
# Editor: Vim

arr = [int(input()) for _ in range(3)]

if arr[0] > arr[1] and arr[1] > arr[2]:
    print("decreasing")
elif arr[2] > arr[1] and arr[1] > arr[0]:
    print("increasing")
else:
    print("neither")
