#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x,y; cin >> n >> x >> y;
    int mn = min(x,y);
    int mx = max(x,y);

    auto ok = [&](int time){
        int total_copy = time/mn + (time-mn)/mx;
        return n <= total_copy;
    };

    int l=0, r = 2e9, mid, ans  = 0;
    while(l<=r){
        mid = l+(r-l)/2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << endl;

    return 0;
}