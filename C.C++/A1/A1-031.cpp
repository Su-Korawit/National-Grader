#include <iostream>
using namespace std;

int main()
{
    string n;

    // input
    cin>> n;

    // process
    for (int i = 0; i < n.length(); i++)
    {
        // output
        cout<< n[i];
        if (n.length() - i == 3 + 1) cout<< ",";
    }
}