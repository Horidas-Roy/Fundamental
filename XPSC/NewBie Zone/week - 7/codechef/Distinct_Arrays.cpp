#include<bits/stdc++.h>
using namespace std;

void getPermutation(vector<int> &nums, int idx, vector<vector<int>> &ans){
        if(idx == nums.size()){
            ans.push_back({nums});
            return;
        }
        for(int i =idx; i<nums.size(); i++){
            swap(nums[idx],nums[i]);
            getPermutation(nums,idx+1,ans);
            swap(nums[idx],nums[i]);
        }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        vector<vector<int>> ans;
        getPermutation(v,0,ans);
        int cnt = 0;
        for(auto &arr : ans){
            bool valid = true;
            for(int i = 1; i<arr.size(); i++){
                 if(arr[i] == arr[i-1]){
                      valid = false;
                 }
            }
            if(valid) cnt++;
        }
        cout << cnt <<"\n";
    }

    return 0;
}