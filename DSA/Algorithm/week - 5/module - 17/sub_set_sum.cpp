#include<bits/stdc++.h>
using namespace std;
int val[1005];
int dp[1005][1005];

bool sub_set_sum(int i,int sum){
      if(i < 0){
        if(sum == 0) return true;
        else return false;
      }
      if(dp[i][sum] != -1){
          return dp[i][sum];
      }
      if(val[i] <= sum){
           bool opt1 = sub_set_sum(i-1,sum - val[i]);
           bool opt2 = sub_set_sum(i-1,sum);
           dp[i][sum] = opt1 || opt2;
           return dp[i][sum];
      }
      else{
          dp[i][sum] = sub_set_sum(i-1,sum);
          return dp[i][sum];
      }
}

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> val[i];
    }
    int sum; cin >> sum;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=sum; j++){
              dp[i][j] = -1;
        }
    }
    if(sub_set_sum(n-1,sum)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}