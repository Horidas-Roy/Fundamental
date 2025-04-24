#include<bits/stdc++.h>
using namespace std;

bool reach(long long int crnt,long long int n){
    if(crnt == n) return true;
    if(crnt > n) return false;
    return reach(crnt*10,n) || reach(crnt*20,n);
}

int main(){
    int t; cin >> t;
    while(t--){
        long long int n; cin >> n;
        if(reach(1,n)){
            cout << "YES" <<"\n";
        }else{
            cout << "NO" <<"\n";
        }
    }
    return 0;
}