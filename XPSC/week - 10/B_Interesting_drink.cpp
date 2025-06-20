#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n; 
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int q; cin >> q;
    while(q--){
        int m; cin >> m;
        auto it = upper_bound(v.begin(),v.end(),m);
        cout << it - v.begin() << endl;
    }

    return 0;
}