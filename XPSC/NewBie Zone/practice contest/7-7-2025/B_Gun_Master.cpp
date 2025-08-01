#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,d; cin >> n >> d;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        int cnt = 0;
        int shortGun = true;
        for(int i=0; i<n; i++){
            if(v[i] <= d && shortGun) continue;
            if(v[i] > d && !shortGun) continue;
            if(v[i] <= d && !shortGun){
                cnt++;
                shortGun = !shortGun;
            }
            else if(v[i] > d && shortGun){
                cnt++;
                shortGun = !shortGun;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}