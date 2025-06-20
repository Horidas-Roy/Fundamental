#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x; cin >> n >> x;
    vector<pair<ll,int>> v(n);
    for(int i=0; i<n; i++){
        int val; cin >> val;
        v[i] = {val,i+1};
    }

    if(n<3){
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    sort(v.begin(),v.end());
    bool found = false;
    for(int i=0; i<n && !found; i++){
        int l = i+1;
        int r = n-1;
        while(l<r){
            ll sum = v[i].first+v[l].first + v[r].first;
            if(sum == x){
                cout << v[i].second <<" "<< v[l].second <<" "<< v[r].second;
                found = true;
                break;
            }
            else if(sum < x){
                l++;
            }
            else{
                r--;
            }
        }
    }
    if(!found) cout << "IMPOSSIBLE" <<"\n";

    return 0;
}