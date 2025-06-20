#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll mnCost = 0;
    ll originalLength = v[n/2];
    for(auto num : v){
       mnCost += abs(originalLength - num);
    }
    cout << mnCost <<"\n";
    return 0;
}