// lower case, lowercase

#include <iostream>
using namespace std;

void groups(char c)
{
    switch (c)
    {
        case 'D': cout<< " of diamonds"; break;
        case 'd': cout<< " of diamonds"; break;
        case 'H': cout<< " of hearts"; break;
        case 'h': cout<< " of hearts"; break;
        case 'C': cout<< " of clubs"; break;
        case 'c': cout<< " of clubs"; break;
        case 'S': cout<< " of spades"; break;
        case 's': cout<< " of spades"; break;
    }
}

void names(char c)
{
    switch (c)
    {
        case 'A': cout<< "ace"; break;
        case 'a': cout<< "ace"; break;
        case 'K': cout<< "king"; break;
        case 'k': cout<< "king"; break;
        case 'Q': cout<< "queen"; break;
        case 'q': cout<< "queen"; break;
        case 'J': cout<< "jack"; break;
        case 'j': cout<< "jack"; break;
    }
}

int main()
{
    char c[4];

    // input
    cin>> c;

    // process
    if (c[0] == '1')
    {
        // output
        cout<< "10";
        groups(c[2]);
    }
    else if (c[0] >= 'A')
    {
        names(c[0]);
        groups(c[1]);
    }
    else
    {
        cout<< c[0];
        groups(c[1]);
    }
}