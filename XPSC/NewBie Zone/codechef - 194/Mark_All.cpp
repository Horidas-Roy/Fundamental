#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n), preMin(n), sufMin(n);

        for(int i = 0; i < n; i++) cin >> v[i];

        if(n == 1){
            cout << v[0] << endl;
            continue;
        }
        
        ll minCost = min(v[0], v[n-1]);

        preMin[0] = v[0];
        for(int i = 1; i < n; i++) {
            preMin[i] = min(preMin[i-1], v[i]);
        }

        sufMin[n-1] = v[n-1];
        for(int i = n-2; i >= 0; i--) {
            sufMin[i] = min(sufMin[i+1], v[i]);
        }

        ll minCost2 = LLONG_MAX;
        for(int i = 0; i < n - 1; i++) {
            ll cost = preMin[i] + sufMin[i + 1];
            if (cost < minCost2) {
                minCost2 = cost;
            }
        }
        if(minCost < minCost2){
            cout << minCost << endl;
        }
        else{
            cout << minCost2 << endl;
        }
    }

    return 0;
}