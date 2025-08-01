#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    vector<int> price(m);
    for (int i = 0; i < m; i++)
    {
        cin >> price[i];
    }
    for (int i = 0; i < m; i++)
    {
        auto it = ml.lower_bound(price[i]);
        if (*it == price[i])
        {
            cout << *it << "\n";
            ml.erase(it);
        }
        else if (it != ml.begin())
        {
            cout << *(--it) << "\n";
            ml.erase(it);
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}