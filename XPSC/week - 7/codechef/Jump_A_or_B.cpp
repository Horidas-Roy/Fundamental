#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, a, b;
        cin >> n >> m >> a >> b;
        if(n*a == m || n*b == m){
            cout << "Yes\n";
            continue;
        }
        int flag = 0;
        if((a-b) != 0 && (m-b*n)%(a-b) == 0){
            ll x = (m-b*n)/(a-b);
            if( x > 0 && x <= n){
                flag = 1;
            }
        }
        if(flag){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }

    return 0;
}