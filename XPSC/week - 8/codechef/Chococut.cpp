#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,m,k; cin >> n >> m >> k;
        if(k == 0){
            cout << m*n <<"\n";
            continue;
        }
        int mx = INT_MIN;
        for(int i=1; i<m; i++){
            if(n*i <= n*m-k){
                mx = max(mx,n*i);
            }
        }
        for(int i=1; i<n; i++){
            if(m*i <= n*m-k){
                mx = max(mx,m*i);
            }
        }
        if(mx == INT_MIN){
            cout << 0 <<"\n";
        }
        else{
            cout << mx <<"\n";
        }
    }

    return 0;
}