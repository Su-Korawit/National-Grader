#include <stdio.h>

int main()
{
    int arr[3][3] = {{60, 80}, {80, 100}, {100, 120}};

    char s, t, add;
    scanf("%c %c %c", &s, &t, &add);

    int ap = 0;
    // printf("%c\n", add);
    if (add == 'P')
    {
        scanf("%d", &ap);
        ap *= 15;
    }
    if (add == 'E')
    {
        scanf("%d", &ap);
        ap *= 10;
    }
    int si = s == 'S' ? 0 : s == 'M' ? 1 : 2; 
    int ti = t == 'R' ? 0 : t == 'T' ? 1 : 2;

    // output
    printf("%d", arr[si][ti] + ap);

    return 0;
}