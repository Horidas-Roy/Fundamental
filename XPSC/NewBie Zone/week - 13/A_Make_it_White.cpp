#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int l = 0, r=n-1;
        while(l<n){
            if(s[l] == 'B') break;
            l++;
        }
        while(r>0){
            if(s[r] == 'B') break;
            r--;
        }
        cout << r-l+1 << endl;
    }

    return 0;
}