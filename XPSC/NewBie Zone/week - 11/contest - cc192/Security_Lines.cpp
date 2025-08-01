#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int mn = INT_MAX;
        for(int i=0; i<n; i++){
            int totalTime;
            if(i==0){
                totalTime = v[i];
            }else{
                int people_remaining = max(0,v[i] - i + 1);
                totalTime = people_remaining + i;
            }
            mn = min(mn,totalTime);
        }
        cout << mn << endl;
    }

    return 0;
}