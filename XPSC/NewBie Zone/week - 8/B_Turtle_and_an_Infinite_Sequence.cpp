#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool kth_bit_on(ll n, int k){
    return ((n>>k)&1LL);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        ll n,m; cin >> n >> m;
        ll l = max(0LL,n-m);
        ll r = n+m;
        ll val = 1;
        ll ans = 0;
        for(int i=0; i<= 32; i++){
            if((r-l) >= val) ans += val;
            else if(kth_bit_on(l,i)) ans += val;
            else if(kth_bit_on(r,i)) ans += val;
            val *= 2;
        }
        cout << ans << "\n";
    }

    return 0;
}