#include <iostream>
#include <string>
using namespace std;

int find_next_char(const string &str, char ch1, int start)
{
    for (int i = start; i < (int)str.length(); ++i)
    {
        if (str[i] == ch1)
            return i;
    }
    return -1;
}

int count_consecutive_u_after(const string &str, int ix)
{
    int count = 0;
    for (int i = ix + 1; i < (int)str.length(); ++i)
    {
        if (str[i] == 'U')
            ++count;
        else
            break;
    }
    return count;
}

int main()
{
    string str;
    cin>> str;

    for (int i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }

    int b = find_next_char(str, 'B', 0);
    int ux = 0;

    if (b != -1) // hasB
    {
        while (b != -1)
        {
            ux = max(count_consecutive_u_after(str, b), ux);
            
            b = find_next_char(str, 'B', b + 1);
        }
        if (ux == 0)
        {
            b = find_next_char(str, 'B', 0);

            for (int i = 0; i < str.length(); i++)
            {
                if (i <= b) cout<< str[i];
                else cout<< "U";
            }
            return 0;
        }
        else
        {
            cout<< "Yes "<< ux;
            return 0;
        }
    }
    else
    {
        char buu[100] = {'B', 'U', 'U'}; // 0 1 2
        for (int i = 0; i < str.length(); i++)
        {
            cout<< buu[i % 3];
        }
    }
}
