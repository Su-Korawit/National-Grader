#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    // input
    cin>> str;

    // process
    for (int i = str.length() - 1; i >= 0; i--)
    {
        // output
        if (str[i] <= 'Z') cout<< (char)(str[i] + 32);
        else cout<< str[i];
    }
}