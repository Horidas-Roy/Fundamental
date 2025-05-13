#include<bits/stdc++.h>
using namespace std;

int main(){
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int A=0, B=0, C=0, D=0;
        for(int i=0; i<4*n; i++){
            if(s[i] == 'A') A++;
            else if(s[i] == 'B') B++;
            else if(s[i] == 'C') C++;
            else if(s[i] == 'D') D++;
        }
        int ans = min(A,n) + min(B,n) + min(C,n) + min(D,n);
        cout << ans <<"\n";
     }

     return 0;
}