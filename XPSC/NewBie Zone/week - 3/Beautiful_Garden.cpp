#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,k,d; cin >> n >> k >> d;
        int T[n];
        for(int i=0; i<n; i++){
            cin >> T[i];
        }
        int mxPluck = 0;
        while (d--)
        {
            int pluckInOneDay = n-k;
            mxPluck += pluckInOneDay;
            
        }
        cout << mxPluck <<"\n";
     }
    return 0;
}