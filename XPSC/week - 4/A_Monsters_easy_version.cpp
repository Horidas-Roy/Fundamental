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
        sort(v.begin(),v.end());
        long long ans = 0, crnMin = 1;
        for(int i=0; i<n; i++){
            if(v[i] >= crnMin){
                ans += v[i] - crnMin;
                crnMin++;
            }
        }
        cout << ans <<"\n";
     }
    return 0;
}