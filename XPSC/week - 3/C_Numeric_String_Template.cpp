#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n;i++){
            cin >> v[i];
        }
        int m; cin >> m;
        while(m--){
            string s; cin >> s;
            int sz = s.size();
            if(sz != n){
                cout << "NO" <<"\n";
                continue;
            }
            map<char,int> mp;
            map<int,char> mp2;
            int flag = 1;
            for(int i=0; i<n; i++){
                if(!mp.count(s[i]) && !mp2.count(v[i])){
                    mp[s[i]] = v[i];
                    mp2[v[i]] = s[i];
                }
                else{
                    if(mp[s[i]] != v[i] || mp2[v[i]] != s[i]){
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag) cout << "YES" <<"\n"; 
            else cout << "NO" <<"\n";  
        }
     }
    return 0;
}