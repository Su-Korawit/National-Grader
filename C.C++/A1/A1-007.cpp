#include <iostream>
using namespace std;

int main()
{
    char lt;
    // input
    cin>> lt;

    // process
    if (lt == 'a' || lt == 'e' || lt == 'i' || lt == 'o' || lt == 'u')
    {
        // output
        cout<< "yes";
    } else {
        cout<< "no";
    }
}