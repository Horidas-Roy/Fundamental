#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,k; cin >> n >> k;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int robinHas = 0, ans  = 0;
        for(int i=0; i<n; i++){
            if(v[i] == 0 && robinHas > 0){
                 ans++;
                 robinHas--;
            }
            else if(v[i] >= k){
                 robinHas += v[i];
            }
        }
        cout << ans <<"\n";
     }
    return 0;
}