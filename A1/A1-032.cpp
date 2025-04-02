#include <iostream>
using namespace std;

int main()
{
    int n;

    // input
    cin>> n;

    // process
    for (int i = 0; i < n; i++)
    {
        cout<< "*";
    }

    cout<< "\n";

    for (int i = 0; i < n-2; i++)
    {
        cout<< "*";
    }

    cout<< "\n";

    for (int i = 0; i < n-4; i++)
    {
        cout<< "*";
    }
}