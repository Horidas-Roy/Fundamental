#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        bool dp[n+5];
        memset(dp,false,sizeof(dp));
        dp[1] = true;
        for(int i=0; i<=n; i++){
            if(dp[i] == true){
                if(i+3 <= n){
                    dp[i+3] = true;
                }
                if(i*2 <= n){
                    dp[i*2] = true;
                }
            }
        }

        if (dp[n])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}