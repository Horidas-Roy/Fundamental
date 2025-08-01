#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> v(n+1);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }
        ll cnt = 0;
        bool flag = false;
        for(int i=1; i<n; i++){
             cnt += v[i];
             if(!flag && v[i] != 0){
                 flag = true;
             }
             if(flag && v[i] == 0){
                cnt++;
             }
        }
        cout << cnt <<"\n";
    }

    return 0;
}