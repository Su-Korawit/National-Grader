#include <stdio.h>

int main()
{
    int w, l, s, p;

    scanf("%d %d %d %d", &w, &l, &s, &p);

    printf("%d\n%d", (w*2 + l*2) * s, (w*2 + l*2) * s * p);

    return 0;
}