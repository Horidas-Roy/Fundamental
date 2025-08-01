#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,l,r; cin >> n >> l >> r;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        long long cnt = 0;
        for(int i=0; i<n; i++){
            auto idx1 = lower_bound(v.begin()+i+1,v.end(),l-v[i]);
            auto idx2 = upper_bound(v.begin()+i+1,v.end(),r-v[i]);

            cnt += idx2 - idx1;
        }
        cout << cnt << endl;
    }

    return 0;
}