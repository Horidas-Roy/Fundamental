#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        vector<int> v(n);
        set<int> s;
        for(int i=0; i<n; i++){
            cin >> v[i];
            s.insert(v[i]);
        }
        int collect = s.size();
        cout << m - collect << endl;
    }

    return 0;
}