#include <iostream>
using namespace std;

int main()
{
    int test, mid, final;

    // input
    cin>> test>> mid>> final;

    // process logic
    if (test >= 5 && mid >= 20 && final >= 25 && test + mid + final >= 50)
    {
        // output
        cout<< "pass";
    }
    else
    {
        cout<< "fail";
    }
}