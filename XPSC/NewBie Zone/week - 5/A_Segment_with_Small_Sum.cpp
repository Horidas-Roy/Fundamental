#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     ll n,k; cin >> n >> k;
     vector<int> v(n);
     for(int i=0; i<n; i++){
        cin >> v[i];
     }
     int l=0, r= 0, mx = 0;
     ll sum = 0;
     while(r<n){
         sum += v[r];
         if(sum <= k){
            mx = max(mx,r-l+1);
         }
         else{
            while(sum > k){
                sum -= v[l];
                l++;
            }
         }
         r++;
     }
     cout << mx <<"\n";
    return 0;
}