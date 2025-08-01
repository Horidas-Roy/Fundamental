#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        sort(v.begin(),v.end());
        map<int,int> mp;
        for(int i=0; i<n-1; i++){
            mp[v[i]]++;
        }
        int mex = 0;
        int small = v[0];
        while(1){
            small++;
            if(mp[small] == 0 ){
                mex = small;
                break;
            }
        }
        int result = mex+v[n-1];
        cout << result << endl;
    }

    return 0;
}