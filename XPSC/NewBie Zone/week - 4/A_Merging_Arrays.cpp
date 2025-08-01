#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int n,m; cin >> n >> m;
     vector<int> v1(n),v2(m);
     for(int i=0; i<n; i++){
        cin >> v1[i];
     }
     for(int i=0; i<m; i++){
        cin >> v2[i];
     }
     vector<int> ans(n+m);
     int i=0, j=0, cur = 0;
     while(i<n && j<m){
         if(v1[i] <= v2[j]){
             ans[cur] = v1[i];
             i++;
         }
         else{
            ans[cur] = v2[j];
            j++;
         }
         cur++;
     }
     while(i<n){
        ans[cur] = v1[i];
        i++;
        cur++;
     }
     while(j<m){
        ans[cur] = v2[j];
        j++;
        cur++;
     }
     for(int x : ans){
        cout << x <<" ";
     }
    return 0;
}