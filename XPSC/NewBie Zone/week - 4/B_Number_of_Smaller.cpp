#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int n,m; cin >> n >> m;
     vector<int> v1(n), v2(m);
     for(int i=0; i<n; i++){
          cin >> v1[i];
     }
     for(int i=0; i<m; i++){
          cin >> v2[i];
     }
     int pn = 0, pm = 0, ans = 0;
     while(pm < m){
           if(pn < n && v1[pn] < v2[pm]){
                ans++;
                pn++;
           }
           else{
              cout << ans << " ";
              pm++;
           }
     }
    return 0;
}