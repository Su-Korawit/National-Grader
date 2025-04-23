#include <iostream>
using namespace std;


int main()
{
    int n, sum = 0, mx = 0;
    int sets[100];
    
    // input
    cin>> n;

    // process
    for (int i = 0; i < n*2; i++)
    {
        cin>> sets[i];

        if (i % 2 != 0) 
        {
            mx = max(sets[i], sets[i-1]);
            sum += mx;
            if (n != 1) cout<< mx;

            if (i != n*2 - 1) cout<< " + ";
        }
    }
            

    // output
    if (n != 1) cout<< " = "<< sum;
    else cout<< sum;
}