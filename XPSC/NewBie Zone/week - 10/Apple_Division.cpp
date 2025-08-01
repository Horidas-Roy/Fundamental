#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    ll minDiff = LLONG_MAX;
    for(int mask = 1; mask <= (1<<n); mask++){
        ll group1 = 0, group2 = 0;
        for(int i=0; i<n; i++){
            if((mask>>i)&1){
                group1+= v[i];
            }
            else{
                group2 += v[i];
            }
        }
        ll dif = abs(group1-group2);
        minDiff = min(minDiff,dif);
    }
    cout << minDiff << endl;
    return 0;
}