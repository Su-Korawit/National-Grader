#include <iostream>
using namespace std;

int main()
{
    char n[2], at;
    
    cin>> n >>at;

    int font, back;
    font = (n[0] - '0') * 10 + (n[1] - '0');
    back = (n[1] - '0') * 10 + (n[0] - '0');

    if (at == '+') cout<< font<< " + "<< back<< " = "<< font + back;
    else if (at == '*') cout<< font<< " * "<< back<< " = "<< font * back;

    return 0;
}