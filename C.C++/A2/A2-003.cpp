#include <iostream>
using namespace std;

int main()
{
    int n;
    // input
    cin >> n;
    
    // process
    int tree[1001], well_tree = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> tree[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && tree[i] > tree[i + 1])
        {
            well_tree += 1;
            // cout<< "call-if"<< endl;
        }
        else if (i == n - 1 && tree[i] > tree[i - 1])
        {
            well_tree += 1;
            // cout<< "call-else-if-1"<< endl;
        }
        else if (i != 0 && i != n - 1 
            && tree[i] > tree[i - 1] && tree[i] > tree[i + 1])
        {
            well_tree += 1;
            // cout<< "call-else-if-2"<< endl;
        }
    }

    // output
    cout<< well_tree;
}