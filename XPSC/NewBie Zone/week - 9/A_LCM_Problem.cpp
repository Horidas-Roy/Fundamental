#include<bits/stdc++.h>
using namespace std;

int lcm(int l,int r){
    return (l/__gcd(l,r))*r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int l,r; cin >> l >> r;
        bool ok = false;
        if(l*2 <= r) ok = true;
        if(ok) cout << l <<" "<< l*2 <<"\n";
        else cout << "-1" <<" " << "-1" <<"\n";
    }

    return 0;
}