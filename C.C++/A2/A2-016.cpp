#include <iostream>
using namespace std;

int main()
{
    char cg, ct, ng[100], nt[100];

    cin>> ct >> nt >> cg >> ng;
    // cout<< ct<< nt<< cg<< ng<< endl;

    if (cg == ct &&
        ng[0] == nt[0] &&
        ng[1] == nt[1] &&
        ng[2] == nt[2] &&
        ng[3] == nt[3] &&
        ng[4] == nt[4]) 
        cout<< 1000000;
    else if (cg != ct &&
        ng[0] == nt[0] &&
        ng[1] == nt[1] &&
        ng[2] == nt[2] &&
        ng[3] == nt[3] &&
        ng[4] == nt[4]) 
        cout<< 100000;
    else if (cg == ct &&
        ng[2] == nt[2] &&
        ng[3] == nt[3] &&
        ng[4] == nt[4]) 
        cout<< 2000;
    else if (cg == ct &&
        ng[3] == nt[3] &&
        ng[4] == nt[4]) 
        cout<< 1000;
    else if (cg != ct &&
        ng[2] == nt[2] &&
        ng[3] == nt[3] &&
        ng[4] == nt[4]) 
        cout<< 200;
    else if (cg != ct &&
        ng[3] == nt[3] &&
        ng[4] == nt[4]) 
        cout<< 100;
    else if (cg == ct) 
        cout<< 20;
    else 
        cout<< 0;

    return 0;
}