#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,k; cin >> n >> k;
        string s; cin >> s;
        int l = 0, ans = 0;
        while(l<n){
            if(s[l] == 'B'){
                ans++;
                l += k;
            }else{
                l++;
            }
        }
        cout << ans <<"\n";
     }
    return 0;
}