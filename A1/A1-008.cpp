#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ids;
    // input
    cin>> ids;

    // process and output
    if (ids.length() == 13) cout<< "yes";
    else cout<< "no";
}