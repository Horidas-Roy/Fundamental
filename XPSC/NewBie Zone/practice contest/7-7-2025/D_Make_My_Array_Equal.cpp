#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        bool ok = true;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            if(x != 0 && x != 1) ok = false;
        }
        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}