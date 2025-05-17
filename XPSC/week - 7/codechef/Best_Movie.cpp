#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int,int>> a(n);
        for(int i=0; i<n; i++){
            int x,y; cin >> x >> y;
            a[i] = {x,y};
        }
        int mn = INT_MAX;
        for(int i=0; i<n; i++){
            int x,y;
            x = a[i].first;
            y = a[i].second;
            if(x >= 7){
                mn = min(mn,y);
            }
        }
        if(mn == INT_MAX){
            cout << -1 <<"\n";
        }
        else{
            cout << mn <<"\n";
        }
    }

    return 0;
}