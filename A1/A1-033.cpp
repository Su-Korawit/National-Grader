#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    char c;

    // input
    cin>> n;

    for (int i = 0; i < n; i++)
    {
        cin>> c;

        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            count++;
        }
    }

    cout<< count;
}