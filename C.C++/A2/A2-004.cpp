#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int blows[100001], groubs[100001] = {0};

    int count = 0, j = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> blows[i];
    }
    
    // process
    sort(blows, blows + n);

    for (int i = 0; i < n; i++)
    {
        j = 0;
        while (true)
        {
            if (blows[i] > groubs[j])
            {
                groubs[j] = blows[i];
                break;
            }
            j++;
        }
    }

    j = 0;

    while (true)
    {
        if (groubs[j] != 0) count++;
        else break;
        j++;
    }

    // output
    cout << count;
}