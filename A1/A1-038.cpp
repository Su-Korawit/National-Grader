#include <iostream>
using namespace std;

int main()
{
    int n;

    // input
    cin>> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0) cout<< "X";
        else cout<< "*";
    }
}