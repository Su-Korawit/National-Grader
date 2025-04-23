#include <iostream>
using namespace std;

int main()
{
    int n;
    
    // input
    cin>> n;

    // process

    if (n >= 1 && n <= 9)
    {
        if (n <= 3) {
            for (int i = 0; i < n; i++)
            {
                // output

                cout<< "I";
            }
        } 
        else if (n == 4)
        {
            cout<< "IV";
        }
        else if (n == 9)
        {
            cout<< "IX";
        }
        else 
        {
            cout<< "V";
            for (int i = 0; i < n - 5; i++)
            {
                cout<< "I";
            }
        }
    } else if (n < 0)
    {
        cout<< "Error : Please input positive number";
    } else
    {
        cout<< "Error : Out of range";
    }
}