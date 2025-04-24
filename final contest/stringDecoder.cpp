#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int sz = s.size();
        for(int i=0; i<sz-1; i+=2){
            char ch = s[i];
            char digit_ch = s[i+1];
            int n = digit_ch - '0';
            for(int j=0; j<n; j++){
                cout << ch;
            }
        }
        cout << endl;
    }
    return 0;
}