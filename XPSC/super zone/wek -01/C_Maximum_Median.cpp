#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(),v.end());

    auto ok = [&](int median){
        long long cnt = 0;
        for(int i=(n/2); i<n; i++){
            cnt += (v[i] < median ? median - v[i] : 0);
        }
        return cnt <= k;
    };

    int l=0, r=2e9, mid, ans;
    while(l<=r){
        mid = l + (r-l)/2;
        if(ok(mid)){
            ans =  mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}