#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>> n; // input

    if (n == 1) // first case
    {
        cout<< 0; return 0;
    }
    // find row
    
    int row = 2;

    
    while (true) {
        if (n > ((row-1) * (row-1)) && (n <= (row * row))) break;
        row++;
    }

    if (row == 2 && n % 2 != 0) // secound case
    {
        cout<< 1; return 0;
    }

    if (n % 2 == 0)
    {
        int arr_even[100001], count = 0, inx = 0;

        for (int i = 2; i <= row * 10; i++)
        {
            if (count >= 0 && count <= 1) arr_even[inx] = i;
            
            inx = count >= 0 && count <= 1 ? inx + 1 : inx;
            count = count == 3 ? 0 : count + 1;
        }

        // for (int i = 0; i < inx; i++) cout<< arr_even[i]<< endl;
        
        cout<< arr_even[row - 2];
    }
    else
    {
        int arr_odd[100001], count = 0, inx = 0;

        for (int i = 4; i <= row * 10; i++)
        {
            if (count >= 0 && count <= 1) arr_odd[inx] = i;

            inx = count >= 0 && count <= 1 ? inx + 1 : inx;
            count = count == 3 ? 0 : count + 1;
        }

        // for (int i = 0; i < inx; i++) cout<< arr_odd[i]<< endl;
        
        cout<< arr_odd[row - 3];
    }

    //          odd & even number ralationship
    // row 2    1       2 -->|
    // row 3    4       3 <--|
    // row 4    5       6 // like sneck ~~
    // row 5    8       7 // like sneck ~~
}