#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m, q[11]= {0};
    for (int i = 0; i < n; i++)
    {
        cin >> m;

        q[m]++;
    }
    for (int i = 0; i < 11; i++)
    {
        if (q[i] != 0) cout<< i << " : " << q[i] << endl;
    }
    
}