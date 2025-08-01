#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int m,k; cin >> m >> k;
        string s; cin >> s;
        int cnt = 0;
        for(int i=0; i<m; i++){
            if(s[i] == 'S') cnt++;
        }
        if(cnt >= k){
            cout << m << endl;
        }
        else{
            int need = k - cnt;
            int ans = m + (need-1);
            cout << ans << endl;
        }
    }

    return 0;
}