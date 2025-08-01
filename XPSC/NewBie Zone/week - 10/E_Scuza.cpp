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
        vector<ll> prefixSum(n),preMax(n);
        prefixSum[0] = v[0];
        preMax[0] = v[0];
        for(int i=1; i<n; i++){
            preMax[i] = max(preMax[i-1],v[i]);
            prefixSum[i] = prefixSum[i-1] + v[i];
        }
        while(q--){
            int k; cin >> k;
            auto it = upper_bound(preMax.begin(),preMax.end(),k);
            int idx = it - preMax.begin();
            if(idx == 0) cout << 0 <<" ";
            else cout << prefixSum[idx-1] <<" ";
        }
        cout << endl;
    }

    return 0;
}