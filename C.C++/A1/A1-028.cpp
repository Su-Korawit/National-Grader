#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    // input
    cin>> str;

    // process
    for (int i = 3; i >= 0; i--)
    {
        cout<< str[i];
    }
}