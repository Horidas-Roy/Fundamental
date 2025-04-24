#include<bits/stdc++.h>
using namespace std;
int weight[1005];
int val[1005];
int dp[1005][1005];

int knapsack(int idx, int mxWeight){
      if(idx < 0 || mxWeight <= 0){
         return 0;
      }
      if(dp[idx][mxWeight] != -1){
         return dp[idx][mxWeight];
      }
      if(weight[idx] <= mxWeight){
         int opt1 =  knapsack(idx-1, mxWeight - weight[idx]) + val[idx];
         int opt2 = knapsack(idx-1,mxWeight);
         dp[idx][mxWeight] = max(opt1,opt2);
         return dp[idx][mxWeight];
      }else{
          dp[idx][mxWeight] = knapsack(idx-1, mxWeight);
          return dp[idx][mxWeight];
      }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,w; cin >> n >> w;
        for(int i=0; i<n; i++){
            cin >> weight[i];
        }
        for(int i=0; i<n; i++){
            cin >> val[i];
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<= w; j++){
                dp[i][j] = -1;
            }
        }
        cout << knapsack(n-1,w) << endl;
    }
    return 0;
}