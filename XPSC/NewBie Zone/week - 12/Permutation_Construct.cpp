#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        vector<int> v(n+1);
        for(int i=1; i<=n; i++) v[i] = i;
        if(n<2){
            cout << -1 << endl;
            continue;
        }
        bool ok = true;
        for(int i=1; i<n; i++){
            if(v[i] != i && v[i]%k == i%k) continue;
            int x = v[i]%k;
            bool found = false;
            for(int j=i+1; j<=n; j++){
                if(x == j%k){
                    swap(v[i],v[j]);
                    found = true;
                }
            }
            if(!found){
                ok = false;
            }
        }
        if(!ok) cout << -1 << endl;
        else{
            for(int i=1; i<=n; i++){
                cout << v[i] <<" ";
            }
            cout << endl;
        }
    }

    return 0;
}