#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,q; cin >> n >> q;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        vector<int> prefixSum(n);
        prefixSum[0] = v[0];
        for(int i=1; i<n; i++){
            prefixSum[i] = prefixSum[i-1] + v[i];
        }
        while(q--){
            int x; cin >> x;
            auto it = lower_bound(prefixSum.begin(),prefixSum.end(),x);
            if(it == prefixSum.end()) cout << -1 << endl;
            else cout << it - prefixSum.begin()+1 << endl;
        }
    }

    return 0;
}