#include <iostream>
#include <string>
using namespace std;

int find_next_char(const string &str, char ch1, char ch2, int start)
{
    for (int i = start; i < (int)str.length(); ++i)
    {
        if (str[i] == ch1 || str[i] == ch2)
            return i;
    }
    return -1;
}

int count_consecutive_a_after(const string &str, int ix)
{
    int count = 0;
    for (int i = ix + 1; i < (int)str.length(); ++i)
    {
        if (str[i] == 'A' || str[i] == 'a')
            ++count;
        else
            break;
    }
    return count;
}

int main()
{
    string str;
    cin >> str;

    int ax = 0;

    int a = find_next_char(str, 'A', 'a', 0);
    int b = find_next_char(str, 'B', 'b', 0);
    int r = find_next_char(str, 'R', 'r', 0);

    for (int i = 0; i < (int)str.length(); ++i)
    {
        char c = toupper(str[i]);
        if (c != 'R' && c != 'A' && c != 'B' && c != 'I' && c != 'T')
        {
            cout << "no " << i;
            return 0;
        }
    }
    bool onlyIT = true;
    for (char c : str)
    {
        char uc = toupper(c);
        if (uc != 'I' && uc != 'T')
        {
            onlyIT = false;
            break;
        }
    }
    if (onlyIT)
    {
        cout << "unknown " << str.length();
        return 0;
    }
    if (r == -1 && b == -1 && a >= 1)
    {
        cout << "no " << a;
        return 0;
    }

    while (r != -1)
    {
        if (str[r + 1] != 'A' && str[r + 1] != 'a')
        {
            cout << "no " << r + 1;
            return 0;
        }
        else
        {
            ax = max(count_consecutive_a_after(str, r), ax);
        }

        r = find_next_char(str, 'R', 'r', r + 1);
    }

    while (b != -1)
    {

        if (str[b + 1] != 'I' && str[b + 1] != 'i' && str[b + 1] != 'T' && str[b + 1] != 't')
        {
            cout << "no " << b + 1;
            return 0;
        }

        b = find_next_char(str, 'B', 'b', b + 1);
    }

    cout << "yes " << ax;
}