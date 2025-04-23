#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100001][5]; // sender, reciver, left hand, right hand, status

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][1];
        arr[i][0] = i + 1;
        arr[i][2] = i + 1;
    }

    int j = 0, count = 0, check = 0;

    // first count, send left hand of sender to rifht hand of reciver
    for (int i = 0; i < n; i++)
    {
        arr[arr[i][1] - 1][2] = arr[i][0];
        arr[arr[i][1] - 1][3] = arr[i][0];
        // should check
    }
    count++;

    for (int i = 0; i < n; i++)
    {
        // cout<< "#"<< arr[i][0]<< " : "<< arr[i][2]<< "#"<< endl;
        if (arr[i][0] == arr[i][2]) arr[i][4] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i][4] == 1) check++;
    }

    if (check == n)
    {
        cout<< count;
        return 0;
    } else check = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     cout<< arr[i][0]<< " : "<< arr[i][1]<< " : "<< arr[i][2]<< " : "<< arr[i][3]<< " : "<< arr[i][4]<< endl;
    // }
    // cout<< "#"<< endl;

    // othor count, send right hand of sender to rifht hand of reciver
    while (true) // error
    {
        // cout<< "arr"<< arr[j][1]<< " : "<< arr[j][2]<< endl;
        arr[arr[j][1] - 1][3] = arr[j][2];
        j++;

        // check process, to change a status
        if (j == n) 
        {
            count++;
            j = 0;
            for (int i = 0; i < n; i++)
            {
                arr[i][2] = arr[i][3];
            }

            for (int i = 0; i < n; i++)
            {
                // cout<< "#"<< arr[i][0]<< " : "<< arr[i][2]<< "#"<< endl;
                if (arr[i][0] == arr[i][2]) arr[i][4] = 1;
            }

            for (int i = 0; i < n; i++)
            {
                if (arr[i][4] == 1) check++;
                else break;
            }

            // cout<< check<< " : "<< n<< endl;
            // for (int i = 0; i < n; i++)
            // {
            //     cout<< arr[i][0]<< " : "<< arr[i][1]<< " : "<< arr[i][2]<< " : "<< arr[i][3]<< " : "<< arr[i][4]<< endl;
            // }
            // cout<< "#"<< endl;
            // break;
            if (check == n) // error
            {
                break;
            } else check = 0;
        }
    }

    // output
    cout << count;
}