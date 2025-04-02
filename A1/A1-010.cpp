#include <iostream>
using namespace std;

int main()
{
    int age;
    char status;
    // input
    cin>> age>> status;

    // process and output
    if (age <= 18 || status == 's' || status == 'S') cout<< "20";
    else cout<< "50";
}