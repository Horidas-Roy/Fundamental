#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,k; cin >> n >> k;
        vector<int> a(n), h(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> h[i];
        }
        int l=0, r=0, mx = 0, sum = 0;
        while(r<n){
            sum += a[r];
            if(r < n-1 && h[r] % h[r+1] == 0 && sum <= k){
                 mx = max(mx,r-l+1);
                 r++;
            }
            else{
                if(r<n-1 && h[r] % h[r+1] != 0){
                    if(sum <= k){
                        mx = max(mx,r-l+1);
                    }
                    l = r+1;
                    r = l;
                    sum = 0;
                }
                else{
                    if(sum <= k){
                        mx = max(mx,r-l+1);
                    }
                    sum -= a[l];
                    l++,r++;
                }
            }
        }
        cout << mx <<"\n";
     }
    return 0;
}