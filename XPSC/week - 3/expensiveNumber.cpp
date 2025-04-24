#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int operation = 0, idx = -1;
        int sz = s.size();
        for(int i = sz-1; i>=0; i--){
              if(s[i] == '0'){
                  operation++;
              }
              else{
                 idx = i;
                 break;
              }
        }
        for(int i=0; i<idx; i++){
             if(s[i] != '0'){
                 operation++;
             }
        }
        cout << operation <<"\n";
    }
    
     
    return 0;
}