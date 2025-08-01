#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,k; cin >> n >> k;
        // int res = 1 + (n-1)*k;
        if(n <= 0){
            cout << 0 <<"\n";
        }
        else{
            cout << 1 + (n-1)*k <<"\n";
        }
     }
    return 0;
}