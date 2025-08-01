#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        vector<int> v(n);
        long long sum = 0, ans = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum += v[i];
        }
        string s; cin >> s;
        int l = 0, r = n-1;
        while(l<r){
              while(l<=r){
                  if(s[l] == 'L') break;
                  else{
                      sum -= v[l];
                      l++;
                  }
              }
              while(l<=r){
                  if(s[r] == 'R') break;
                  else{
                      sum -= v[r];
                      r--;
                  }
              }
              if(l<r) ans += sum;
              if(l<r){
                  sum -= v[l];
                  l++;
              }
              if(l<r){
                  sum -= v[r];
                  r--;
              }
        }
        cout << ans <<"\n";
     }
    return 0;
}