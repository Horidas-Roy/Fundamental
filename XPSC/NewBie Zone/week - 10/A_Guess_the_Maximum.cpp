#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        int ans = INT_MAX;
        for(int i=0; i<n-1; i++){
            int mx = max(v[i],v[i+1]);
            ans = min(ans,mx);
        }
        cout << ans - 1 << endl;
    }

    return 0;
}