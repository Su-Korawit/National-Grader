#include <iostream>
using namespace std;

int main()
{
    int n, k, t;
    cin >> n>> k>> t;

    // process
    int i = 1, count = 0;
    while (true)
    {
        count++; // man who check

        if (i == t) // check first on T to break
        {
            // output
            cout<< count;
            return 0;
        } 

        if (i + k > n) {
            i = i + k - n; // find a next man
            if (i == 1)
            {
                cout<< count;
                return 0;
            }
        }
        else i += k;

    }
}