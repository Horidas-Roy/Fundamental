#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<ll> v(n);
    multiset<ll> mt;
    int cnt = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        auto it = mt.upper_bound(v[i]);
        if(it == mt.end()){
            cnt++;
        }
        else{
            mt.erase(it);
        }
        mt.insert(v[i]);
    }
    cout << cnt <<"\n";
    return 0;
}