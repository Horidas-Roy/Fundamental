#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x; cin >> n >> x;;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int ans = 0;
    for(int mask = 1; mask < (1<<n); mask++){
        int sum = 0;
        for(int i=0; i<n; i++){
            if(mask & (1<<i)){
               sum += v[i];
            }
        }
        if(sum == x) ans++;
    }
    cout << ans ;
    return 0;
}