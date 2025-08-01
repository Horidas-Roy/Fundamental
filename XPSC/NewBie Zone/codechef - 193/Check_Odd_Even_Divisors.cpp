#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        ll a,b; cin >> a >> b;
        int ok = false;
        if(b == 0){
            if(a >= 1){
                ok = true;
            }
        }
        else{
            if( a == 0 ){
                ok = false;
            }
            else{
                if (b % a == 0) {
                    ll k = b/a;
                    if (k >= 1) {
                        ok = true;
                    }
                }
            }
        }
        if(ok)  cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}