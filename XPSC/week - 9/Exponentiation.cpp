
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int MOD = 1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;
        int num = a, pow = b;
        ll ans = 1;
        while(pow){
            if(pow & 1 == 1){
                ans = (ans%MOD * num%MOD)%MOD;
            }
            pow >>= 1;
            num = (1LL*num*num)%MOD;
        }
        cout << ans <<"\n";
    }

    return 0;
}