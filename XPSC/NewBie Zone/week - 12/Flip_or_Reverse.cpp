#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string a,b; cin >> a >> b;
        vector<tuple<int,int,int>> ans;
        for(int i=0; i<n; i++){
            if(a[i] != b[i]){
                int j = i;
                while(j<n && a[j] != b[j]) j++;
                ans.push_back({1,i+1,j});
                i = j-1;
            }
        }
        cout << ans.size() << endl;
        for(auto [type,L,R] : ans){
            cout << type <<" "<< L <<" "<< R << endl;
        }
    }

    return 0;
}