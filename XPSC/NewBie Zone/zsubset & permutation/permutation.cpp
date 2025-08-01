#include<bits/stdc++.h>
using namespace std;
vector<int> v = {1,2,3,4};
vector<vector<int>> ans;

void permutation(vector<int> &v,int idx,vector<vector<int>> &ans){
    if(idx == v.size()){
        ans.push_back({v});
        return;
    }
    for(int i=idx; i<v.size(); i++){
        swap(v[i],v[idx]);
        permutation(v,idx+1,ans);
        swap(v[i],v[idx]);
    }
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    permutation(v,0,ans);
    for(auto v : ans){
        for(auto x : v){
            cout << x <<" ";
        }
        cout <<"\n";
    }
    return 0;
}