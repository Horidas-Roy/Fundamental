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
        vector<vector<int>> m(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << m[i][j] <<" ";
            }
            cout <<"\n";
        }
        // vector<vector<int>> replace(n / k, vector<int>(n / k));
        // for (int i = 0; i < n; i += k)
        // {
        //     for (int j = 0; j < n; j+=k)
        //     {

        //         replace[i / k][j / k] = m[i][j];
        //     }
        // }
        // for (int i = 0; i < n / k; i++)
        // {
        //     for (int j = 0; j < n / k; j++)
        //     {
        //         cout << replace[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
    }
    return 0;
}