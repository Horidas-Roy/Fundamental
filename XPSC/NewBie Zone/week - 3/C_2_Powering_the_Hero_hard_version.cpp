#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        vector<int> deck(n);
        for(int i=0; i<n; i++){
            cin >> deck[i];
        }
        priority_queue<int> pq;
        long long int ans = 0;
        for(int i=0; i<n; i++){
            if(deck[i] == 0){
                if(!pq.empty()){
                    ans += pq.top();
                    pq.pop();
                }
            }
            else{
                pq.push(deck[i]);
            }
        }
        cout << ans <<"\n";
     }
     
     
    return 0;
}