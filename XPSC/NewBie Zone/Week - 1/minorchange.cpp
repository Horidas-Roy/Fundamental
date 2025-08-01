#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t; cin >> s >> t;
    int operation = 0;
    int sz = s.size();
    for(int i=0; i<sz; i++){
        if(s[i] != t[i]){
            operation++;
        }
    }
    cout << operation;
    return 0;
}