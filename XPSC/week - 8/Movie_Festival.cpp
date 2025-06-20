#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> l,pair<int,int> r){
      return l.second < r.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
        int x,y; cin >> x >> y;
        v[i] = {x,y};
    }
    sort(v.begin(),v.end(),cmp);
    int cnt = 1;
    int y = v[0].second;
    for(int i = 1; i<n; i++){
        if(v[i].first >= y){
            cnt++;
            y = v[i].second;
        }
    }
    cout << cnt <<"\n";
    // for(auto [x,y] : v){
    //     cout << x <<" "<< y <<"\n";
    // }
    return 0;
}