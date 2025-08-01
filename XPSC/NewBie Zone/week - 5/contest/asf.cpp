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
        if (n < 2)
        {
            cout << -1 << "\n";
            continue;
        }
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                ans.push_back(1);
            }
            else{
                ans.push_back(-1);
            }
        }
        if(n >= 3 && n%2 != 0){
            ans[n-1] = -3;
            ans[n-2] = 2;
            ans[n-3] = 1;
        }
        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}
