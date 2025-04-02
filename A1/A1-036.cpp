#include <iostream>
using namespace std;

int main()
{
    int n;

    // input
    cin>> n;

    // process
    for (int i = n - n % 10; i >= 0; i-=10)
    {
        // output
        cout<< i<< " ";
    }
}