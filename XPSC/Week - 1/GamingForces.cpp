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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if(v.size() == 2 && v[0] == v[1] && v[0] != 1){
            cout << 2 << endl;
            continue;
        }
        // sort(v.begin(), v.end());
        int spell = 0;
        set<int> used;  
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i] > 0 && used.find(v[i]) == used.end()){
                    used.insert(v[i]);
                    spell++;
            }
            else if(v[i] > 0 && used.find(v[i]) != used.end()){
                    auto pos = used.find(v[i]);
                    used.erase(pos);
                    spell = spell + v[i] - 1;
            }  
        }
        cout << spell << endl;
    }
    return 0;
}