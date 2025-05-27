#include<bits/stdc++.h>
using namespace std;
const int maxN = 30;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> cnt(maxN);
        for(int i=0; i<n; i++){
            int x; cin >> x;
            int mxBit = __lg(x);
            cnt[mxBit]++;
        }
        long long ans = 0;
        for(int i=0; i<maxN; i++){
            ans += (1LL*cnt[i]*(cnt[i]-1))/2;
        }
        cout << ans <<"\n";
    }

    return 0;
}