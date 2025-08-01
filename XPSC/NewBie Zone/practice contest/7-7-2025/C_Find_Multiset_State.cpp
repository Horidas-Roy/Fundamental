#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        deque<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        for(int i=0; i<k; i++){
            if(v.size()<2) break;
            int mn = v.front();
            int mx = v.back();
            v.pop_front();
            v.pop_back();
            v.push_back(mn+mx);
        }
        for(int val : v){
            cout << val <<" ";
        }
        cout << endl;
    }

    return 0;
}