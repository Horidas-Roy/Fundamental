#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> v(n);
        ll cnt = 0,sum = 0;
        ll mx = LLONG_MIN;
        for(int i=0; i<n; i++){
            cin >> v[i];
            mx = max(mx,v[i]);
            sum += v[i];
            if(sum == 2*mx) cnt++;
        } 
        cout << cnt <<"\n";
    }

    return 0;
}