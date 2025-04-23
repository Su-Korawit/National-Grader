string = input().upper()
lst = list(string)

if 'B' in lst:
    mx = 0

    while 'B' in lst:
        head = lst.index('B')
        tail = head + 1
        count = 0

        while tail < len(lst) and lst[tail] == 'U':
            count += 1
            tail += 1

        if count > mx:
            mx = count

        lst[head] = 'Z'  # Mark as processed

    print("Yes", mx)
else:
    print("No")
