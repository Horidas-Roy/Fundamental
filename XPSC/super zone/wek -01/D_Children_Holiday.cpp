#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m,n; cin >> m >> n;
    vector<tuple<int,int,int>> v(n);
    for(int i=0; i<n; i++){
        int t,z,y; cin >> t >> z >> y;
        v[i] = {t,z,y};
    }
    
    vector<int> can(n);
    auto ok = [&](int mid){
        int has = m;
        vector<int> may(n);
        for(int i=0; i<n; i++){
            tuple<int,int,int> T = v[i];
            int t = get<0>(T);
            int z = get<1>(T);
            int y = get<2>(T);
            int total = (t*z) + y;
            int can = mid/total;
            int remaining = mid%total;
            int curr = can*z + min(z,remaining/t);
            curr = min(has,curr);
            has -= curr;
            may[i] = curr;
        }
        if(!has){
            for(int i=0; i<n; i++){
                can[i] = may[i];
            }
        }
        return (!has);
    };

    int l=0, r=1e8, mid, ans;
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
    cout << ans <<"\n";
    for(int val : can){
        cout << val <<" ";
    }

    return 0;
}