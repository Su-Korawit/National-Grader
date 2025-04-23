# Author: Korawit Suporn
# Date  : 23 Apr. 2025
# Editor: Vim

num = input()
opera = input()

result = num + opera + str(int(num[::-1]))
print(num, opera, str(int(num[::-1])), "=", eval(result))
