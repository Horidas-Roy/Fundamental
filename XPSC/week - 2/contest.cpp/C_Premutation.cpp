#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        deque<deque<int>> v(n,deque<int>());
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                int x; cin >> x;
                v[i].push_back(x);
            }
        }
        map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[v[i][0]] += 1;
        }
        int mx = INT_MIN;
        int absenceVal = -1;
        for(auto it=mp.begin(); it!= mp.end(); it++){
            if(it->second > mx){
                mx = it->second;
                absenceVal = it->first;
            }
        }
        int idx = -1;
        for(int i=0; i<n; i++){
            if(v[i][0] != absenceVal){
                v[i].push_front(absenceVal);
                idx = i;
                break;
            }
        }
        for(int x : v[idx]){
            cout << x <<" ";
        }
        cout << "\n";
    }
    return 0;
}