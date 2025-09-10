#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> ans;
        ll decimal_pow = 10;
        for(int i=1; i<=18; i++){
            ll x, d = 1 + decimal_pow;
            if(d>n) break;
            if(n%d == 0){
                x = n/d;
                if(x>0) ans.push_back(x);
            }
            if(decimal_pow > LLONG_MAX/10) break;
            decimal_pow *= 10;
        }
        cout << ans.size() << endl;
        if(ans.size()){
            sort(ans.begin(),ans.end());
            for(int i=0; i<ans.size(); i++){
                cout << ans[i] <<" ";
            }
            cout << endl;
        }
    }

    return 0;
}