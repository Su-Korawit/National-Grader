#include <iostream>
using namespace std;

int main()
{
    int n[4]; // use int for numbers

    // input
    cin>> n[0]>> n[1]>> n[2];

    // process
    if (n[0] == n[1] && n[1] == n[2])
    {
        // output
        cout<< "all the same";
    }
    else if (n[0] != n[1] && n[1] != n[2] && n[0] != n[2])
    {
        cout<< "all different";
    }
    else
    {
        cout<< "neither";
    }
}