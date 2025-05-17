#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        set<string> s;
        for(int i=0; i<n; i++){
             string x; cin >> x;
             s.insert(x);
        }
        string temp(k,'0');
        bool ok = true;
        for(int i= k-1; i>=0; i--){
             temp[i] = '1';
             if(s.find(temp) == s.end()){
                 ok = false;
                 break;
             }
             temp[i] = '0';
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
        // for(auto x : s){
        //     cout << x <<" ";
        // }
    }

    return 0;
}