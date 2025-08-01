#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<int> p(n + 1);

        if (k == 1){
            for (int i = 1; i <= n; ++i){
                p[i] = n + 1 - i;
            }
        }
        else if (k == n){
            for (int i = 1; i <= n; ++i){
                p[i] = i;
            }
        }
        else
        {
            int part = n/k;
            int remain = n % k;
            int current = 1;
            for (int i = 0; i < k; ++i)
            {
                int start = i * part + 1;
                int end = start + part - 1;
                if (i == k - 1)
                {
                    end += remain;
                }
                for (int j = end; j >= start; --j)
                {
                    p[j] = current++;
                }
            }
        }

        for (int i = 1; i <= n; ++i)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }

    return 0;
}