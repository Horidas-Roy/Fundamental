#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k; cin >> n >> m >> k;
    long long ans = 0;
    vector<int> v(m+1);
    for(int i=0; i<m+1; i++){
        cin >> v[i];
    }
    for(int i=0; i<m; i++){
        long long cnt = __builtin_popcount(v[i]^v[m]);
        if(cnt <= k){
            ans++;
        }
    }
    cout << ans <<"\n";

    return 0;
}