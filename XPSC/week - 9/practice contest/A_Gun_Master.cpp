#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,d; cin >> n >> d;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >>  v[i];
        }
        
        bool shortGun = true , longGun = false;
        int cnt = 0;
        for(int i=0; i<n; i++){
             if(v[i] <= d && shortGun == false){
                  shortGun = true;
                  longGun = false;
                  cnt++;
             }
             else if(v[i] > d && longGun == false){
                shortGun = false;
                longGun = true;
                cnt++;
             }
        }
        cout << cnt <<"\n";
    }

    return 0;
}