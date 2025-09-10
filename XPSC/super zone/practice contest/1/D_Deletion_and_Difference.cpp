#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        map<int,int> mp;
        ll ans = 0,zero = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i] != 0)
                mp[v[i]]++;
            else
                zero++;
        }
        for(auto [x,y] : mp){
            ans += y%2;
            zero += y/2;
        }
        if(zero>0) ans += 1;
        cout << ans << endl;
    }

    return 0;
}