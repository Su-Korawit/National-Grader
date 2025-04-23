#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, m, mx = INT_MAX;

    // input
    cin>> n;

    // process
    for (int i = 0; i < n; i++)
    {
        cin>> m;

        mx = min(mx, m);
    }

    // output
    cout<< mx;
}