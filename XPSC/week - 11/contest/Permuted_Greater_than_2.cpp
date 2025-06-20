#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int x,y,z; cin >> x >>  y >> z;

        if (x == 0) {
            cout << "Yes\n";
        }
        else if (y == 0 && x <= z + 1) {
            cout << "Yes\n";
        }
        else if (z > 0 && y > 0 && x <= z) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}