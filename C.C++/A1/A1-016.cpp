#include <iostream>
using namespace std;

int main()
{
    char ids[9];

    // input
    cin>> ids;

    // process
    if (ids[2] == '1' && ids[3] == '6') {
        // output
        cout<< "yes";
    } else {
        cout<< "no";
    }
}