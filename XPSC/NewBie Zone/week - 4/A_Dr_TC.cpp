#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int initialCount = 0;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '1') initialCount++;
        }
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                ans += initialCount - 1;
            }
            else{
                ans += initialCount + 1;
            }
        }
        cout << ans <<"\n";
     }
    return 0;
}