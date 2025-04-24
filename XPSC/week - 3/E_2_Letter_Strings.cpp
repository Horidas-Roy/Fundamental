#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        vector<string> v(n);
        map<char,int> firstChar,secondChar;
        map<string,int> str;
        for(int i=0; i<n; i++){
            cin >> v[i];
            firstChar[v[i][0]] += 1;
            secondChar[v[i][1]] += 1;
            str[v[i]] += 1;
        }
        long long int ans=0;
        for(int i=0; i<n; i++){
            ans += firstChar[v[i][0]] + secondChar[v[i][1]] - 2*str[v[i]];
            firstChar[v[i][0]]--;
            secondChar[v[i][1]]--;
            str[v[i]]--;
        }
        cout << ans <<"\n";
     }
    return 0;
}