#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        ll n, K;
        cin >> n >> K;
        vector<ll> a(n);
        ll total = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }

        ll m1 = LLONG_MAX, m2 = LLONG_MAX;
        ll freq = 0;

        for (ll x : a) {
            if (x < m1) {
                m2 = m1;
                m1 = x;
                freq = 1;
            } else if (x == m1) {
                freq++;
            } else if (x < m2) {
                m2 = x;
            }
        }

        ll totalAdded = 0;
        if (freq >= 2) {
            totalAdded = K * m1;
        } else {
            ll current = m2;
            for (ll i = 0; i < K; i++) {
                ll nextVal = (m1 + current + 1) / 2;
                totalAdded += nextVal;
                if (nextVal == m1 + 1) {
                    ll rem = K - i - 1;
                    totalAdded += rem * (m1 + 1);
                    break;
                }
                current = nextVal;
            }
        }

        cout << total + totalAdded << '\n';
    }
    return 0;
}