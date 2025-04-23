#include <iostream>
using namespace std;

int main()
{
    int n;

    // input
    cin>> n;

    // process
    while (n != 0)
    {
        if (n >= 1000)
        {
            n -= 1000;
            cout<< "M";
        }
        else if (n < 1000 && n >= 900)
        {
            n -= 900;
            cout<< "CM";
        }
        else if (n < 900 && n >= 500)
        {
            n -= 500;
            cout<< "D";
        }
        else if (n < 500 && n >= 400)
        {
            n -= 400;
            cout<< "CD";
        }
        else if (n < 400 && n >= 100)
        {
            n -= 100;
            cout<< "C";
        }
        else if (n < 100 && n >= 90)
        {
            n -= 90;
            cout<< "XC";
        }
        else if (n < 90 && n >= 50)
        {
            n -= 50;
            cout<< "L";
        }
        else if (n < 50 && n >= 40)
        {
            n -= 40;
            cout<< "XL";
        }
        else if (n < 40 && n >= 10)
        {
            n -= 10;
            cout<< "X";
        }
        else if (n < 10 && n >= 9)
        {
            n -= 9;
            cout<< "IX";
        }
        else if (n < 9 && n >= 5)
        {
            n -= 5;
            cout<< "V";
        }
        else if (n < 5 && n >= 4)
        {
            n -= 4;
            cout<< "IV";
        }
        else if (n < 4 && n >= 1)
        {
            n -= 1;
            cout<< "I";
        }
    }
}