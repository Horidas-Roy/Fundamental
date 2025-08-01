#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        vector<int> nums(n+1);
        for(int i=1; i<=n; i++){
            nums[i] = i;
        }
        for(int i=1; i<=n; i++){
            if((x|i) != x) continue;
            if(nums[i] != i) continue;
            int j = (x^i);
            if(j<1 || j>n) continue;
            swap(nums[i],nums[j]);
        }
        for(int i=1; i<=n; i++) cout << nums[i] <<" ";
        cout << endl;
    }

    return 0;
}