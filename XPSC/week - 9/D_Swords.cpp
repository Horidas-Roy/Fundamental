#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    vector<ll> lose;
    ll totalLose = 0;
    for(int i=1; i<n; i++){
        lose.push_back(v[0]-v[i]);
        totalLose += v[0]-v[i];
    }
    ll gcd = 0;
    for(auto val : lose){
        // cout << val <<" ";
        gcd = __gcd(gcd,val);
    }
    cout << totalLose/gcd << " " << gcd << "\n";
    // cout << gcd;

    return 0;
}