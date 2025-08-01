#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int a,b,n; cin >> a >> b >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        ll ans = b;
        for(int i=0; i<n; i++){
            if(v[i] < a){
                ans += v[i];
            }else{
                ans += a-1;
            }
        }
        cout << ans <<"\n";
     }
    return 0;
}