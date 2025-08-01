#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        if (s[0] != t[0])
        {
            cout << -1 << "\n";
            continue;
        }

        vector<int> ans;
        int flag = 1;
        for (int i = n - 1; i > 0; i--)
        {
            if (t[i] != s[i])
            {
                if (s[i] == '1')
                {
                    if (s[i] == '0')
                        s[i] = '1';
                    if (s[i] == '1')
                        s[i] = '0';
                    ans.push_back(i);
                }
                else
                {
                    int j = i - 1;
                    while (s[j] != '1')
                        j--;
                    if (j < 0)
                    {
                        flag = 0;
                        break;
                    }
                    int k = j;
                    while (k < i - 1)
                    {
                        if (s[k] == '1')
                        {
                            if (s[k + 1] == '0')
                                s[i] = '1';
                            if (s[k + 1] == '1')
                                s[i] = '0';
                            ans.push_back(k + 1);
                        }
                        k++;
                    }
                    if (s[i] == '0')
                        s[i] = '1';
                    if (s[i] == '1')
                        s[i] = '0';
                    ans.push_back(i);
                }
            }
        }
        if (flag)
        {
            cout << ans.size() << "\n";
            for (int x : ans)
            {
                cout << x << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}
