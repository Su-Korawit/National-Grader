//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int num, gap=1, ans, n, l;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> l >> n;
    while(num < n){
        for(int i=1; i<=l; i++, gap++){
            cout<< i<< gap<< endl;
            num += gap;
        }
        ans++;
    }
    cout << ans;
}