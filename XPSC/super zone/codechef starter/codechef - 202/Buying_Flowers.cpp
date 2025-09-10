#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN = 100;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> dp(maxN+1,1e9);
    dp[2] = 4;
    dp[3] = 5;
    for(int i=4; i<=maxN; i++){
        if (i - 2 >= 0){
            dp[i] = min(dp[i], dp[i - 2] + 4);
        }
        if (i - 3 >= 0){
            dp[i] = min(dp[i], dp[i - 3] + 5);
        }
    }

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << dp[n] << endl;
    }

    return 0;
}