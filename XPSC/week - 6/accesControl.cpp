#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,k; cin >> n >> k;
        string s; cin >> s;
        if(s[0] == '0'){
            cout << "NO\n";
            continue;
        }
        int swipes = 0;
        bool flag = true;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                swipes = k;
            }
            else if(s[i] == '0' && swipes < 0){
                flag = false;
                break;
            }
            swipes--;
        }
        if(flag){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
     }
    return 0;
}