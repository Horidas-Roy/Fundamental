#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i <n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        if(v[0] == v[1]){
            cout << "Yes\n";
            continue;
        }
        if(v[0] == 1){
            ll gcd = 0;
            for(int i=1; i<n; i++){
                gcd = __gcd(gcd,v[i]);
            }
            if(gcd == 1){
                cout << "Yes\n";
                continue;
            }
        }
        vector<ll> divisors;
        for(int i=1; i<n; i++){
            if(v[i]%v[0] == 0){
                divisors.push_back(v[i]);
            }
        }
        ll gcd = 0;
        bool ok = false;
        for(auto val : divisors){
            gcd = __gcd(gcd,val);
            if(gcd == v[0]){
                ok = true;
                break;
            }
        }
        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}