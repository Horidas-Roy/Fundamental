#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int x = n/3;
    int y = (n-x)%2 == 0 ? ((n-x)/2) : (n-x)/2 + 1;
    int z = (n-x)/2;
    int mx = max({x,y,z});
    int mn = min({x,y,z});
    cout << mx - mn << endl;

    return 0;
}