#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int n; cin >> n;
     vector<ll> v(n);
     map<ll,ll> mp;
     for(int i=0; i<n; i++){
        cin >> v[i];
        mp[v[i]]++;
     }
     ll mx = *max_element(v.begin(),v.end());
     long long prev1 = 0, prev2 = 0, cur = 0;
     for(int i=1; i<=mx; i++){
         cur = max(prev1, prev2+mp[i]*i);
         prev2 = prev1;
         prev1 = cur;
     }
     cout << cur <<"\n";
     return 0;
}