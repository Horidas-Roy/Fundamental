#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        if(n < 2){
            cout << -1 <<"\n";
            continue;
        }
        int ans  = -1;
        for(int i=1; i<n; i++){
            if(v[i] != v[i-1]){
                ans = 2;
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}