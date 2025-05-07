#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,s; cin >> n >> s;
        vector<int> v(n);
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum += v[i];
        }
        if(sum < s){
            cout << -1 <<"\n";
            continue;
        }
        int l=0, r = 0, mx = 0;
        sum = 0;
        while(r<n){
            sum += v[r];
            if(sum <= s){
                mx = max(mx,r-l+1);
            }
            else{
                while(sum > s){
                    sum -= v[l];
                    l++;
                }
            }
            r++;
        }
        cout << n-mx <<"\n";
     }
    return 0;
}