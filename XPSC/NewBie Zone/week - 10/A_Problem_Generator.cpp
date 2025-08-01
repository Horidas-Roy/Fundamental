#include<bits/stdc++.h>
using namespace std;
const vector<char> problems = {'A','B','C','D','E','F','G'};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        string s; cin >> s;
        map<char,int> mp;
        for(char ch : s){
            mp[ch]++;
        }
        int ans = 0;
        for(char ch : problems){
            if((m - mp[ch]) > 0) ans += m - mp[ch];
        }
        cout << ans << endl;
    }

    return 0;
}