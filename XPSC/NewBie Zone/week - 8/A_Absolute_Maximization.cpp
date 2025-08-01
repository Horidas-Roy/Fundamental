#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int oR = 0, And = -1;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            oR = (oR | x);
            if(And == -1) And = x;
            else And = (And & x);
        }
        cout << oR - And <<"\n";
    }

    return 0;
}