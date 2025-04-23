#include <iostream>
using namespace std;

int main()
{
    char c;
    int n, f;
    string colors[3] = {"Red", "Green", "Blue"};

    cin>> c>> n;

    f = c == 'R' ? 0 : c == 'G' ? 1 : 2;

    // process
    for (int i = 0; i < n; i++)
    {
        if (f >= 3) f = 0;

        cout<< colors[f]<< " ";

        f++;
    }
}