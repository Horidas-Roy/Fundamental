#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> v(n+1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }
        ll mx = LONG_MIN;
        for(int i=1; i<n; i++){
            ll val = v[i]+v[n];
            mx = max(mx,val);
        }
        cout << mx << endl;
    }

    return 0;
}