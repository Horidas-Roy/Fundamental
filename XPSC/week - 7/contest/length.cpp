#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int l = 0, r = n-1;
        while(s[l] != 'B') l++;
        while(s[r] != 'B') r--;
        cout << r-l+1 <<"\n";
    }

    return 0;
}