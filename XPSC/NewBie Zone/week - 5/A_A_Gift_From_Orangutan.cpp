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
        auto mn = min_element(v.begin(),v.end());
        auto mx = max_element(v.begin(),v.end());
        int res = (n-1)*(*mx-*mn);
        cout << res <<"\n";
     }

     return 0;
}