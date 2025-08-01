#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> x(n+1), y(n+1);
        for(int i=1; i<=n; i++) cin >> x[i];
        for(int i=1; i<=n; i++) cin >> y[i];
        int pivot = y[1]; 
        vector<pair<int,int>> p;
        for(int i=1; i<=n; i++){
            int a = abs(pivot - x[i]);
            int b = x[i];
            p.push_back({a,b});
        }
        sort(p.begin(),p.end());
        vector<int> v2;
        v2.push_back(0);
        y[0] = 0;
        for(auto [a,b] : p){
            v2.push_back(b);
            // cout << a <<" "<< b << endl;
        }
        if(y == v2){
            auto it = find(x.begin(),x.end(),pivot);
            int idx = it - x.begin();
            cout << idx << endl;
        }
        else{
            cout << -1 << endl;
        }
    }

    return 0;
}