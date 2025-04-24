#include<bits/stdc++.h>
using namespace std;



int main(){
    long long int t; cin >> t;
    vector<bool> dp(t+1);
    
    dp[0] = true;
    for(int i=0; i<= t; i++){
        if(dp[i] == true){
            if(i+3 <= t){
                dp[i+3] = true;
            }
            if(i+4 <= t){
                dp[i+4] = true;
            }
        }
    }
    if(dp[t]){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}