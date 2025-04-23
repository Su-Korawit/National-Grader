#include <iostream>
using namespace std;

int main()
{
    int n, even = 0, odd = 0;

    // process
    for (int i = 0; i < 3; i++)
    {
        // input
        cin>> n;

        if (n % 2 == 0) even++;
        else odd++;
    }

    // output
    cout<< "even "<< even<< "\nodd "<< odd;
}