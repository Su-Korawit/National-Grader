#include <iostream>
using namespace std;

int main()
{
    int mid, fin;
    // input
    cin>> mid>> fin;

    // process and output
    if (mid + fin >= 50) cout<< mid + fin<< "\npass";
    else cout<< mid + fin<< "\nfail";
}