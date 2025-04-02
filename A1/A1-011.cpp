#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    bool counted[256] = {false}; // Array ไว้เช็คว่าเคยพิมพ์ตัวนี้ไปหรือยัง

    for (int i = 0; i < 5; i++) {
        if (!counted[(int)str[i]]) { // ถ้ายังไม่ได้ถูกพิมพ์
            int count = 0;
            
            for (int j = 0; j < 5; j++) {
                if (str[i] == str[j]) {
                    count++;
                }
            }

            cout << count << str[i]; // แสดงผลการนับ
            counted[(int)str[i]] = true; // Mark ว่าตัวนี้ถูกนับแล้ว
        }
    }
}
