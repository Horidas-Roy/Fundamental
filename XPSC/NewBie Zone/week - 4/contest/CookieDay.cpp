#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,k; cin >> n >> k;
        vector<int> v(n);
        for(int i=0 ;i<n; i++){
            cin >> v[i];
        }
        int mn = INT_MAX;
        for(int i=0; i<n; i++){
            if(v[i] >= k){
                mn = min(v[i]%k,mn);
            }
        }
        if(mn == INT_MAX) cout << -1 <<"\n";
        else cout << mn <<"\n";
     }
    return 0;
}