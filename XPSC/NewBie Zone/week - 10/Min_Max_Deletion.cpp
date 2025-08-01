#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,q; cin >> n >> q;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        ll score = 0;
        for(int i = 0; i<n-1; i++){
            score += min(v[i],v[i+1]);
        }

        while(q--){
            int idx,val; cin >> idx >> val;
            idx = idx-1; // use 0 based index
            
            // remove old contribution
            if(idx > 0) score -= min(v[idx-1],v[idx]);
            if(idx < n-1) score -= min(v[idx],v[idx+1]);
            
            v[idx] = val;
            // add new contribution
            if(idx > 0) score += min(v[idx-1],v[idx]);
            if(idx < n-1) score += min(v[idx],v[idx+1]);

            cout << score << endl;
        }
    }

    return 0;
}