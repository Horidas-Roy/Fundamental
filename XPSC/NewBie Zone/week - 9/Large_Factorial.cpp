#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll fact = 1;
        for(int i=1; i<=n; i++){
            fact = ((fact%MOD) * (i%MOD))%MOD;
        }
        cout << fact <<"\n";
    }

    return 0;
}