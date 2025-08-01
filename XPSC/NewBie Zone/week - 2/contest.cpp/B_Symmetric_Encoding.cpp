#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        vector<int> fArr(26);
        for(char ch : s){
            int idx  = ch - 'a';
            fArr[idx] = 1;
        }
        vector<int> v;
        for(int i=0; i<26; i++){
            if(fArr[i] != 0){
                char ch = 'a' + i;
                v.push_back(ch);
            }
        }
        map<char,char> mp;
        int l = 0, r = v.size()-1;
        while(l<=r){
            mp[v[l]] = v[r];
            mp[v[r]] = v[l];
            l++;
            r--;
        }
        string encoding = "";
        for(char ch : s){
            encoding += mp[ch];
        }
        cout << encoding << "\n";
    }
    return 0;
}