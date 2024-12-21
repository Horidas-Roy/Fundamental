#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    int n;
    char ch;
    while(t--){
        cin >> n >> ch;
        string s="";
        s.resize(n,ch);
        for(int i=0; i<s.length(); i++){
              cout << s[i] <<" ";
        }
        cout << endl;
    }
    return 0;
}