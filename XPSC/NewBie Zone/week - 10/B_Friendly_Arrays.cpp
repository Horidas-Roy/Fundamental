#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        vector<int> a(n),b(m);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<m; i++) cin >> b[i];
        int mainXor = 0;
        for(int j=0; j<n; j++){
            mainXor ^= a[j];
        }
        int mn = mainXor, mx = mainXor;
        for(int i=0; i<m; i++){
            int tempXor = 0;
            for(int j=0; j<n; j++){
                tempXor ^= ( b[i] | a[j]);
            }
            mn = min(mn,tempXor);
            mx = max(mx,tempXor);
        }
        cout << mn <<" "<< mx << endl;
    }

    return 0;
}