#include<bits/stdc++.h>
using namespace std;

int minDivisor(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return i;
        }
    }
    return n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int l,r; cin >> l >> r;
        if(r < 4){
            cout << -1 <<"\n";
            continue;
        }

        if(l != r){
            if(r%2 == 0){
                cout << 2 << " " << r-2 <<"\n";
            }
            else{
                cout << 2 << " " << r-3 << "\n";
            }
        }
        else if(l == r){
            if(r%2 == 0){
                cout << 2 << " " << r - 2 <<"\n";
            }
            else{
                 int d = minDivisor(r);
                 if( d != r){
                    cout << d << " " << r - d <<"\n";
                 }
                 else{
                    cout << -1 << "\n";
                 }
            }
        }
    }

    return 0;
}