#include <iostream>
using namespace std;

int main()
{
    int pn;
    char pc[2];

    // input
    cin >>pc >>pn;

    // process
    if (pc[0] == 'H' && pn == 4567) cout<< "safe unlocked";
    else if (pc[0] != 'H' && pn == 4567) cout<< "safe locked - change char";
    else if (pc[0] == 'H' && pn != 4567) cout<< "safe locked - change digit";
    else cout<< "safe locked";   
}