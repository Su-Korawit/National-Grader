#include <stdio.h>

int main()
{
    char m, t;
    int g, s, v, cal = 0;

    scanf("%c %d %c %d %d", &m, &g, &t, &s, &v);

    // cout<< cal<< endl;
    // process
    if (m == 'H') cal += 5 * g;
    else if (m == 'J') cal += 2 * g;
    else cal += 3 * g;

    // cout<< cal<< endl;
    

    if (t == 'R')
    {
        if (s == 1) cal += 12 * v;
        else if (s == 2) cal += 18 * v;
        else cal += 25 * v;
    }
    else if (t == 'T')
    {
        if (s == 1) cal += 15 * v;
        else if (s == 2) cal += 20 * v;
        else cal += 30 * v;
    }
    else cal += (5 + 5*s) * v;

    // output
    printf("%d", cal);
    return 0;
}