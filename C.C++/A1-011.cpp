#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    bool counted[256] = {false};

    for (int i = 0; i < 5; i++) {
        if (!counted[(int)str[i]]) {
            int count = 0;
            
            for (int j = 0; j < 5; j++) {
                if (str[i] == str[j]) {
                    count++;
                }
            }

            cout << count << str[i];
            counted[(int)str[i]] = true;
        }
    }
}
