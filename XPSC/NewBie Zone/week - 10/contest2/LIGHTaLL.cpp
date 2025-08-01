#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int one = 0, zero = 0;
        bool ok = true;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                if(i+1 < n && (s[i+1] == '0')){
                    s[i+1] = '1';
                    i++;
                }
            }
            else{
                 if(i+1 < n && s[i+1] == '1'){
                    s[i] = '1';
                    i++;
                 }
                 else if(i+1 < n && s[i+1] == '0'){
                    ok = false;
                    break;
                 }
            }
        }

        for(int i=0; i<n; i++){
            if(s[i] == '0'){
                ok = false;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}