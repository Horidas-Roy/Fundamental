#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        ll x,y; cin >> x >> y;
        if(x == 1){
            cout << y <<"\n";
        }
        else{
            int zero = x - 1;
            if(zero > y){
                cout << 0 <<"\n";
            }
            else{
                cout << y/zero <<"\n";
            }
        }
    }

    return 0;
}