#include <iostream>
using namespace std;

int main()
{
    int m, d;

    // input
    cin>> m>> d;

    // process
    if (m >= 1 && m <= 3)
    {
        if (m == 3 && d >= 21)
        {
            // output
            cout<< "spring";
        } else {
            cout<< "winter";
        }
    }
        
    if (m >= 4 && m <= 6)
    {
        if (m == 6 && d >= 21)
        {
            cout<< "summer";
        } else {
            cout<< "spring";
        }
    }

    if (m >= 7 && m <= 9)
    {
        if (m == 9 && d >= 21)
        {
            cout<< "fall";
        } else {
            cout<< "summer";
        }
    }
    
    if (m >= 10 && m <= 12)
    {
        if (m == 12 && d >= 21)
        {
            cout<< "winter";
        } else {
            cout<< "fall";
        }
    }
}