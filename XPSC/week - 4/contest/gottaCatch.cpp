#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,x,y; cin >> n >> x >> y;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            ans += min(x*v[i],y);
        }
        cout << ans <<"\n";
     }
    return 0;
}