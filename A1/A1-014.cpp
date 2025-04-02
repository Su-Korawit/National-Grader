#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, mn = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        // input
        cin>> n;

        // process
        mn = min(mn, n);
    }

    // output
    cout<< mn;
}