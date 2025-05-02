#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,k; cin >> n >> k;
        string s; cin >> s;
        priority_queue<int,vector<int>,greater<int>> pq;
        int l = 0, r = 0;
        int ans = 0;
        while(r<n){
            if(s[r] == 'W') ans++;
            if(r-l+1 == k){
                pq.push(ans);
                if(s[l] == 'W'){
                    ans -= 1;
                }
                l++;
            }
            r++;
        }
        cout << pq.top() <<"\n";
     }
    return 0;
}