#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        n = n-1;
        int x = 1,cnt = 0;
        while(x <= n){
            cnt++;
            x += 7;
        }
        cout << cnt << "\n";
    }
    return 0;
}