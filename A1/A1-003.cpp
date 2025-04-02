#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n, count = 0, mx = INT_MIN;

    while (count != 3) {
        cin>> n;

        mx = max(mx, n);

        count++;
    }

    cout<< mx;
}