#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        ll n,m; cin >> n >> m;
        vector<ll> ans;
        ans.push_back(n);
        for(int i=0; i<63; i++){
            if((n >> i)&1LL) continue;
            ll x = n+(1LL<<i);
            if(x <= m){
                ans.push_back(x);
            }
        }

        if(ans.size() < 2) cout << -1 << endl;
        else{
            cout << ans.size() << endl;
            for(auto it : ans){
                cout << it << " ";
            }
            cout << endl;
        }
    }

    return 0;
}