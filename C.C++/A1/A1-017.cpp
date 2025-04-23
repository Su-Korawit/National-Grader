#include <iostream>
using namespace std;

int main()
{
    int y1 = 0, m1 = 0, d1 = 0, y2 = 0, m2 = 0, d2 = 0;

    // input
    cin>> y1>> m1>> d1>> y2>> m2>> d2;

    // process
    if (y1 > y2) 
    {
        // output
        cout<< 2;
    }
    else if (y1 == y2)
    {
        if (m1 > m2) 
        {
            cout<< 2;
        }
        else if (m1 == m2)
        {
            if (d1 > d2) 
            {
                cout<< 2;
            }
            else if (d1 == d2)
            {
                cout<< 0;
            }
            else {
                cout<< 1;
            }
        }
        else {
            cout<< 1;
        }
    } else {
        cout<< 1;
    }
}