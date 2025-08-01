#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     ll n,s; cin >> n >> s;
     vector<ll> v(n);
     for(int i=0; i<n; i++){
        cin >> v[i];
     }
     ll l=0, r= 0, mn = LONG_MAX;
     ll sum = 0;
     while(r<n){
         sum += v[r];
         if(sum >= s){
             while(sum >= s){
                mn = min(mn,r-l+1);
                sum -= v[l];
                l++;
            }
         }
         r++;
     }
     if(mn == LONG_MAX) cout << -1 <<"\n";
     else cout << mn <<"\n";
    return 0;
}