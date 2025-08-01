#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> bits(31, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 30; j >= 0; j--)
            {
                if (v[i] >> j & 1)
                {
                    bits[j]++;
                }
            }
        }
        long long ans = 0;
        for (int j = 30; j >= 0; j--)
        {
            if(bits[j] == n){
                ans += (1LL << j);
            }
            else{
                int need = n - bits[j];
                if(need <= k){
                    ans += (1LL << j);
                    k -= need;
                }
            }
        }
        cout << ans <<"\n";
    }

    return 0;
}