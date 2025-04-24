#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        multiset<int> ml;
        for(int i=1; i<=n;i++){
            ml.insert(i);
        }
        vector<pair<int,int>> v;
        for(int i=1; i<n;i++){
            int a = *(--ml.end());
            ml.erase(--ml.end());
            int b = *(--ml.end());
            ml.erase(--ml.end());
            int c = (a+b+1)/2;
            ml.insert(c);
            v.push_back({a,b});
        }
        cout << *ml.begin() <<"\n";
        for(auto [x,y] : v){
            cout << x <<" " << y <<"\n";
        }
     }
    return 0;
}