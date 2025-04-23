#include <iostream>
using namespace std;

int main()
{
    int d, m;

    // input
    cin>> d>> m;

    // process
    
    switch (m)
    {
    case 12:
        // output
        if (d >= 22) cout<< "capricorn";
        else cout<< "sagittarius";
        break;
    
    case 11:
        if (d >= 22) cout<< "sagittarius";
        else cout<< "scorpio";
        break;
    
    case 10:
        if (d >= 24) cout<< "scorpio";
        else cout<< "libra";
        break;

    case 9:
        if (d >= 23) cout<< "libra";
        else cout<< "virgo";
        break;

    case 8:
        if (d >= 23) cout<< "virgo";
        else cout<< "leo";
        break;
    
    case 7:
        if (d >= 23) cout<< "leo";
        else cout<< "cancer";
        break;

    case 6:
        if (d >= 22) cout<< "cancer";
        else cout<< "gemini";
        break;

    case 5:
        if (d >= 21) cout<< "gemini";
        else cout<< "aquarius";
        break;

    case 4:
        if (d >= 20) cout<< "taurus";
        else cout<< "aries";
        break;

    case 3:
        if (d >= 21) cout<< "aries";
        else cout<< "pisces";
        break;
        
    case 2:
        if (d >= 19) cout<< "pisces";
        else cout<< "aquarius";
        break;
        
    case 1:
        if (d >= 20) cout<< "aquarius";
        else cout<< "capricorn";
        break;
    }
}