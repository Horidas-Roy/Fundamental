#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        vector<int> w(n+1);
        for(int i=1; i<=n; i++){
            cin >> w[i];
        }
        sort(w.begin(),w.end());
        int mx = 0;
        for(int i=1; i<=100; i++){
            int cnt = 0;
            int l = 1, r = n;
            while(l<r){
                if(w[l]+w[r] < i){
                    l++;
                }
                else if(w[l]+w[r] > i){
                    r--;
                }
                else{
                    cnt++;
                    l++,r--;
                }
            }
            mx = max(cnt,mx);
        }
        cout << mx <<"\n";
     }
    return 0;
}