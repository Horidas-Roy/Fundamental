#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,h; cin >> x >> h;
    int hour = (x-4)*24 + h;
    cout << hour << endl;

    return 0;
}