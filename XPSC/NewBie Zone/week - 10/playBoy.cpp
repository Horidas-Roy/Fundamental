#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    int q;cin >> q;
    while(q--){
        int x; cin >> x;
        auto a = lower_bound(v.begin(),v.end(),x);
        auto b = upper_bound(v.begin(),v.end(),x);
        int idx_a ,idx_b = -1;
        idx_a = a - v.begin() - 1;
        if(b != v.end()) idx_b = b - v.begin();
        if(idx_a >= 0){
            cout << v[idx_a] <<" ";
        }
        else cout << 'X' <<" ";
        if(idx_b != -1){
            cout << v[idx_b] <<"\n";
        }
        else cout << 'X' <<"\n";
    }
    return 0;
}