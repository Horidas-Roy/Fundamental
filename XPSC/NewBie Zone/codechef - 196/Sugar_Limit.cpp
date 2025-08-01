#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        int mx = INT_MIN;
        for (int i = 0; i <= 100; i++) {
            int sum = 0;
            int l = i;
            for (int j = 0; j < n; j++) {
                if (b[j] <= l && a[j] > 0) {
                    sum += a[j];
                }
            }
            int satisfy = sum - l;
            mx = max(mx, satisfy);
        }

        cout << mx << '\n';
    }

    return 0;
}
