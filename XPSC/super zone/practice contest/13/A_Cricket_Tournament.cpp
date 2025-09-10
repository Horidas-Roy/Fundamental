#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int matches = 0;
        while(n > 1){
            matches += ceil(n/2.0);
            n = n/2;
        }
        if(matches >= m){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }

    return 0;
}