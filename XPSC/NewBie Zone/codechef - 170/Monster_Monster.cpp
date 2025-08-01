#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        ll n,x; cin >> n >> x;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end(),greater<ll>());
        ll mx = LLONG_MIN;
        for(int i=0; i<n; i++){
            ll val = x*i + v[i];
            mx = max(mx,val);
        }
        cout << mx << endl;
    }

    return 0;
}