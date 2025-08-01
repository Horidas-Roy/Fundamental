#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            nums[i] = i+1;
        }
        vector<int> ans;
        bool flag = false;
        do{
            for(int i=0; i<n; i++){
                if((nums[i] | i+1) == x){
                    ans = nums;
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }while(next_permutation(nums.begin(),nums.end()));
        if(flag){
            for(int val : ans){
                cout << val << " ";
            }
        }
        else{
            for(int val : nums){
                cout << val << " ";
            }
        }
        cout <<"\n";
    }

    return 0;
}