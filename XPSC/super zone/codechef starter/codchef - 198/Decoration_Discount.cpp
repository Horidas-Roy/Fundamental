#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j) continue;
                if(i == j-1){
                    ans = min(ans,v[i]+v[j]/2);
                }
                else if(j == i-1){
                    ans = min(ans,v[j]+v[i]/2);
                }
                else{
                    ans = min(ans,v[i]+v[j]);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}