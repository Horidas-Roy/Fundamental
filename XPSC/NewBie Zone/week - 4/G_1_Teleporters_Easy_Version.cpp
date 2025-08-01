#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,c; cin >> n >> c;
        vector<long long> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            v[i] += i+1;
        }
        sort(v.begin(),v.end());
        long long ans = 0;
        for(int i=0; i<n; i++){
             if(c >= v[i]){
                ans++;
                c -= v[i];
             }
             else{
                break;
             }
        }
        cout << ans <<"\n";
     }
    return 0;
}