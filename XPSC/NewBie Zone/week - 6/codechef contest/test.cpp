#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, h;
        cin >> n >> h;
        
        vector<pair<int, int>> weapons;
        int min_time = INT_MAX;

        // Read all weapons
        while (n--) {
            int s, d;
            cin >> s >> d;
            weapons.push_back({s, d});
        }

        // Try each weapon as the primary one
        for (auto [s, d] : weapons) {
            int time_needed = (h + d - 1) / d * s; // Full cycles
            min_time = min(min_time, time_needed);
        }

        cout << min_time << "\n";
    }
    return 0;
}

