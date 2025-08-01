#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        bool found = false;
        for(int x=0; x<256; x++){
            int b = 0;
            for(int i=0; i<n; i++){
                b = b ^ (a[i] ^ x);
            }
            if(b == 0){
                cout << x <<"\n";
                found = true;
                break;
            }
        }
        if(!found){
            cout << -1 <<"\n";
        }
    }

    return 0;
}