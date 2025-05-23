#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,k,x; cin >> n >> k >> x;
        vector<ll> v(n);
        v[0] = 1;
        for(int i=1; i<n; i++){
             v[i] = v[i-1]*2;
        }
        int idx = -1;
        for(int i=0; i<n; i++){
             if(x <= v[i]){
                 idx = i;
                 break;
             }
        }
        if(k <= idx){
            cout <<"YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}