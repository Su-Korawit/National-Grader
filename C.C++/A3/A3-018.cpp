#include <iostream>
using namespace std;

int main()
{
    // input
    int n, m, count = 0;
    cin >> n>> m;

    // process
    for (int i = 1; i <= n; i++)
    {
        // cout<< i<< endl;
        if (m - (i * i) == 0) {
            // output
            cout<< n - i;
            return 0;
        }
        else if (m - (i * i) < 0) {
            cout<< n - i + 1;
            return 0;
        }
        else
        {   
            m -= i * i;
        }
    }
}