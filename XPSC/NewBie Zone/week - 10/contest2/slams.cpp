#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x; cin >> x;
    int remain = 25 - x;
    int minYear = ceil(remain/4.0);
    cout << minYear ;

    return 0;
}