#include <iostream>
using namespace std;

int main()
{
    int n, sum = 1;

    // input
    cin>> n;

    for (int i = n; i > 0; i--)
    {
        sum *= i;
    }

    // output
    cout<< sum; 
}