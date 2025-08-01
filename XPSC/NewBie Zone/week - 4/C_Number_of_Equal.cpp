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
     long long int pn = 0, pm = 0, ans = 0, cnt1 = 0, cnt2 = 0;
     long long int current = v1[0];
     while(pn < n){
        while(pn<n){
            if(v1[pn] == current){
                cnt1++;
                pn++;
            }
            else{
                break;
            }
        } 
        while(v2[pm] < current) pm++;
        while(pm<m){
            if(v2[pm] == current){
                cnt2++;
                pm++;
            }
            else{
                break;
            }
        } 
        ans += cnt1 * cnt2;
        cnt1 = 0, cnt2 = 0;
        if(pn < n) current = v1[pn];
     }
     cout << ans <<"\n";
    return 0;
}