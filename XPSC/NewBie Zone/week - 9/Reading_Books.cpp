#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
    }
    ll mxTimeTaken = *max_element(v.begin(),v.end());
    ll firstTaken = mxTimeTaken;
    ll secondTaken = sum - firstTaken;
    if(firstTaken > secondTaken) cout << firstTaken*2 << "\n";
    else cout << sum <<"\n";
    return 0;
}