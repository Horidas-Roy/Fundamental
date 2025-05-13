#include<bits/stdc++.h>
using namespace std;

void ps(vector<int> v, int i, vector<int> &ans){
    if(i == v.size()){
        for(int x : ans){
            cout << x <<" ";
        }
        cout <<"\n";
        return;
    }
    //include
    ans.push_back(v[i]);
    ps(v,i+1,ans);
    //backtracking
    ans.pop_back();
    ps(v,i+1,ans);
}

void ps2(int n,int k,vector<int> &ans){
    if(k == n+1){
        for(int x : ans ){
            cout << x <<" ";
        }
        cout <<"\n";
        return;
    }
    ans.push_back(k);
    ps2(n,k+1,ans);
    ans.pop_back();
    ps2(n,k+1,ans);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v = {1,2,3,4}, ans;
    // ps(v,0,ans);
    ps2(3,1,ans);
    return 0;
}