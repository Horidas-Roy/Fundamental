#include<bits/stdc++.h>
using namespace std;

vector<string> allSubStr(string s){
    int sz = s.size();
    vector<string> v;
    for(int i=0; i<sz;i++){
        for(int j=i; j<sz; j++){
           string s1 = s.substr(i,j-i+1);
           v.push_back(s1);
        }
     }
    return v;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s,subS; 
        cin >> s >> subS;
        int cnt = 0;
        vector<string> s1 = allSubStr(subS);
        vector<string> s2 = allSubStr(s);
        int sz1 = s1.size();
        int sz2 = s2.size();
        for(int i=0; i<sz1; i++){
            for(int j=0; j<sz2; j++){
                if(s1[i] == s2[j]){
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}