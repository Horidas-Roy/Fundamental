#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        ll x,y; cin >> x >> y;
        
        if(__gcd(x,y) > 1){
            cout << 0 << endl;
            continue;
        }
        else if(__gcd(x+1,y) > 1 || __gcd(x,y+1) > 1){
            cout << 1 << endl;
            continue;
        }
        else{
            cout << 2 << endl;
        }
    }
    return 0;
}