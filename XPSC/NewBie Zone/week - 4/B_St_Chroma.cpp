#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,x; cin >> n >> x;
        vector<int> v;
        for(int i=0; i<n; i++){
            if(i != x){
                v.push_back(i);
            }
        }
        if(x < n){
            v.push_back(x);
        }
        for(auto it = v.begin(); it != v.end(); it++){
           cout << *it <<" ";
        }
        cout <<"\n";
     }
    return 0;
}