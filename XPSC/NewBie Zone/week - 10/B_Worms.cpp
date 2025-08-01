#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    vector<int> prefixSum(n);
    prefixSum[0] = v[0];
    for(int i=1; i<n; i++){
        prefixSum[i] = prefixSum[i-1] + v[i];
    }
    int m; cin >> m;
    while(m--){
        int q; cin >> q;
        auto it = lower_bound(prefixSum.begin(),prefixSum.end(),q);
        cout << it - prefixSum.begin()+1 << endl; 
    }
    // for(int val : prefixSum) cout << val <<" ";

    return 0;
}