#include <iostream>
using namespace std;

int main()
{
    int m, n = 10, count = 0;

    // input
    cin>> m;

    // process
    while (n != 0)
    {
        if (m >= n) { m -= n; count++; }
        
        if (m < n && m >= 0) {
            // output
            cout<< n<< " = "<< count<< "\n";

            // logic
            n /= 2;
            count = 0;
        }
    }

}