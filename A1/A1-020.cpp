#include <iostream>
using namespace std;

int main()
{
    int n[4];

    // input
    cin>> n[0]>> n[1]>> n[2]>> n[3];

    // process
    if (n[0] < n[1] && n[1] < n[2])
    {
        // output
        cout<< "increasing";
    }
    else if (n[0] > n[1] && n[1] > n[2])
    {
        cout<< "decreasing";
    }
    else
    {
        cout<< "neither";
    }
}