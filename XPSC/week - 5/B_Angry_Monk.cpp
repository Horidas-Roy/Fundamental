#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,k; cin >> n >> k;
        vector<int> v(k);
        for(int i=0; i<k; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        int operation = 0, sum = v[0];
        for(int i=k-1; i>0; i--){
             if(sum == n){
                break;
             }
             sum += v[i];
             operation += 2*v[i] - 1;
        }
        cout << operation <<"\n";
        // for(int x : v){
        //     cout << x <<" ";
        // }
     }
    return 0;
}