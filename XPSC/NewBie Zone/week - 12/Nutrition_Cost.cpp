#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,c; cin >> n >> c;
        vector<int> A(n),B(n);
        for(int i=0; i<n; i++) cin >> A[i];
        for(int i=0; i<n; i++) cin >> B[i];
        
        map<int,int> mp;
        for(int i=0; i<n; i++){
            if(mp.find(A[i]) == mp.end()){
                mp[A[i]] = B[i];
            }
            else{
                if(mp[A[i]] > B[i]){
                    mp[A[i]] = B[i];
                }
            }
        }
        vector<pair<int,int>> cost;
        for(auto [key,value] : mp){
            cost.push_back({value,key});
        }
        sort(cost.begin(),cost.end());
        int mx = 0, item = 1, totalCost = 0;
        for(auto [value,key] : cost){
            totalCost += value;
            if(mx < c*item - totalCost){
                mx = c*item - totalCost;
            }
            item++;
        }
        cout << mx << endl;
    }

    return 0;
}