#include <iostream>
using namespace std;

int main()
{
    int c;
    char s;

    // input
    cin>> c>> s;

    // process
    c = s == 'f' || s == 'F' ? (c - 32) * 5 / 9 : c;

    if (c <= 0) cout<< "solid"; // output
    else if (c > 0 && c < 100) cout<< "liquid";
    else cout<< "gas";
}