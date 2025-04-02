#include <iostream>
using namespace std;

int main()
{
    char str[4];
    int vowels = 0;

    // input
    cin>> str;

    // process
    for (int i = 3; i >= 0; i--)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        }
    }

    // output
    cout<< vowels;
}