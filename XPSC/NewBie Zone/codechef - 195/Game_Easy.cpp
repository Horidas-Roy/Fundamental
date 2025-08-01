#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i<n; i++) cin >> v[i];
        int K = 2*n;
        vector<vector<int>> dp(K + 1,vector<int>(n + 1,INT_MIN));
        dp[0][0] = 0;

        for (int i = 0; i<n; i++) {
            vector<vector<int>> new_dp(K + 1,vector<int>(n + 1,INT_MIN));
            for (int k = 0; k <= K; k++) {
                for (int x = 0; x <= i; x++) {
                    if (dp[k][x] == INT_MIN) continue;
                    if(new_dp[k][x] < dp[k][x]){
                        new_dp[k][x] = dp[k][x];
                    }
                    if (k+1 <= K && x+1 <= n){
                        if(new_dp[k+1][x+1] < dp[k][x]+v[i])
                            new_dp[k+1][x+1] = dp[k][x]+v[i];
                    }
                    if (k+2 <= K && x+1 <= n){
                        if(new_dp[k+2][x+1] < dp[k][x]+v[i]+x)
                            new_dp[k+2][x+1] = dp[k][x]+v[i]+x;                        
                    }
                }
            }
            dp = move(new_dp);
        }
        
        vector<int> result(K+1,INT_MIN);
        for (int k = 1; k <= K; ++k) {
            int mx = INT_MIN;
            for (int x = 0; x <= n; ++x) {
                mx = max(mx, dp[k][x]);
            }
            cout << mx << " ";
        }
        cout << endl;
    }
    return 0;
}
