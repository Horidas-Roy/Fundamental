#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int boys = 0, girls = 0;
        int cnt = 0;
        for(int i=0; i<n; i++){
             cnt++;
             if(s[i] == 'B'){
                boys++;
             }
             else if(s[i] == 'G'){
                girls++;
             }
             if(boys > 2*girls){
                break;
             }
        }
        cout << cnt <<"\n";
     }
    return 0;
}