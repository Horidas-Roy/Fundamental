#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,s,m; cin >> n >> s >> m;
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++){
            int x,y; cin >> x >> y;
            v.push_back({x,y});
        }
        int mxFreeTime = max(v[0].first,m - v[n-1].second);
        for(int i=0; i<n-1; i++){
            mxFreeTime = max(v[i+1].first - v[i].second,mxFreeTime);
        }
        if(mxFreeTime >= s){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}