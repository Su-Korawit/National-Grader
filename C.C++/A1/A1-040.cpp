#include <iostream>
using namespace std;

int main()
{
    int n, totals = 0;

    // input and process
    while (n != 5)
    {
        cin>> n;
         
        switch(n)
        {
            case 1: totals += 100; break;
            case 2: totals += 120; break;
            case 3: totals += 200; break;
            case 4: totals += 60; break;
        }
    }

    cout<< "Bye Bye\nTotal Calories: "<< totals;
}