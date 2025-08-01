#include<bits/stdc++.h>
using namespace std;

int main(){
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int r=0; 
        string s1;
        map<char,int> mp;
        while(r<n){
            if(s[r] == '0'){
                s1.push_back('0');
                mp[s[r]]++;
                while(s[r] == '0'){
                    r++;
                }
            }
            while(s[r] == '1'){
                s1.push_back('1');
                mp[s[r]]++;
                r++;
            }
        }
        if(mp['0'] >= mp['1']){
            cout << "No\n";
        }
        else{
            cout << "Yes\n";
        }
     }

     return 0;
}