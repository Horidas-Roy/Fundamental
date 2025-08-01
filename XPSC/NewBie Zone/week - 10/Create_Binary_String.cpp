#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,a,b,c,d; cin >> n >> a >> b >> c >> d;
        int cnt0 = 0;
        int mx = 0;
        for(int i=0; i<=n; i++){
            int cnt1 = n-cnt0;
            int cost = a*cnt0 + b*cnt1 + max(c,d)*cnt1*cnt0;
            mx = max(mx,cost);
            cnt0++;
        }
        cout << mx << endl;
    }
    return 0;
}