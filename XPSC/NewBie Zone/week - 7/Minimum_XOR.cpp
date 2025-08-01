#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> v(n);
        long long total = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            total ^= v[i];
        }
        if(total == 0){
            cout << 0 <<"\n";
        }
        else{
            long long ans = total;
            for(int val : v){
                ans = min(ans,total^val);
            }
            cout << ans  <<"\n";
        }
    }

    return 0;
}