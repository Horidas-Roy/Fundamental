#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,m,l,r; 
        cin >> n >> m >> l >> r;
        int p=0,q=0;
        vector<pair<int,int>> v;
        int odd = 1;
        while(m--){
              if(odd){
                  v.push_back({p,q+1});
                  odd = 0;
              }else{
                v.push_back({p-1,q});
                odd = 1;
              }
        }
        for(auto [x,y]:v){
            if( l < x && y < r){
                cout << x <<" "<< y << "\n";
                break;
            }
        }
    }
    return 0;
}