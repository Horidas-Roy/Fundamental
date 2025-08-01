#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<ll>());
        if (n > 29) v.resize(29);
        n = v.size();

        ll mxModulation = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (j == i) continue;
                for (int k = j + 1; k < n; ++k) {
                    if (k == i) continue;
                    ll sum = v[j] + v[k];
                    if (sum == 0) continue;
                    ll mod = v[i] % sum;
                    if (mod > mxModulation) {
                        mxModulation = mod;
                        if (mxModulation == v[i] - 1) {
                            goto end;
                        }
                    }
                }
            }
        }
        end:
        cout << mxModulation << '\n';
    }

    return 0;
}