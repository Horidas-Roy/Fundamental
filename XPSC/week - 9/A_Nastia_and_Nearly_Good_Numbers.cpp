#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        ll a,b; cin >> a >> b;
        if(b == 1){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        ll x = 1LL*a*b, y = x + a, z = x+y;
        cout << x <<" "<< y << " " << z << "\n";
    }

    return 0;
}