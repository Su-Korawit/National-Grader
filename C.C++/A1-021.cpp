#include <iostream>
using namespace std;

int main()
{
    int n;

    // forgot input
    cin>> n;

    // process
    if ( (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0) || n == 1500)
    {
        // output
        cout<< "yes";
    }
    else 
    {
        cout<< "no";
    }

}