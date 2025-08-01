#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int n; cin >> n;
     vector<long long> v(n);
     for(int i=0; i<n; i++){
        cin >> v[i];
     }
     int l = 0, r = n-1;
     long long sum1 = 0, sum2 = 0, ans = 0;
     while(l<=r){
          if(sum1 < sum2){
             sum1 += v[l];
             l++;
          }
          else if(sum1 > sum2){
             sum2 += v[r];
             r--;
          }
          else{
            ans = sum1;
            sum1 += v[l];
            l++;
          }
          if(sum1 == sum2) ans = sum1;
        }
        cout << ans <<"\n";
    return 0;
}