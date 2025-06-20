#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int l = 0, r = 0;
    set<int> s;
    int mx = 0;
    while(r<n){
        while(s.count(v[r])){
            s.erase(v[l]);
            l++;
        }
        s.insert(v[r]);
        mx = max(mx,r-l+1);
        r++;
    }
    cout << mx <<"\n";
    return 0;
}