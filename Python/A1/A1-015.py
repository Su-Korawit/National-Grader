# Author: Korawit Suporn
# Date  : 23 Apr. 2025
# Editor: Vim

firstname = input()
lastname = input()
age = input()

if len(firstname) > 5:
    print(firstname[:2] + lastname[-1] + age[-1])
else:
    print(firstname[0] + age + lastname[-1])
