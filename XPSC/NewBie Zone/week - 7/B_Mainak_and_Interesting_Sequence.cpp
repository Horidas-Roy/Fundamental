#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        if(n > m){
            cout << "NO\n";
            continue;
        }
        vector<int> ans;
        if(n%2 == 0 && m%2 == 0){
            cout << "YES\n";
            for(int i=1; i<= n-2; i++){
                ans.push_back(1);
            }
            ans.push_back((m-(n-2))/2);
            ans.push_back((m-(n-2))/2);
        }
        else if(n%2 == 1 && m%2 == 1){
            cout << "YES\n";
            for(int i=1; i<= n-1; i++){
                ans.push_back(1);
            }
            ans.push_back(m-(n-1));
        }
        else if(n%2 == 1 && m%2 == 0){
            cout << "YES\n";
            for(int i=1; i<= n-1; i++){
                ans.push_back(1);
            }
            ans.push_back(m-(n-1));
        }
        else if(n%2 == 0 && m%2 == 1){
            cout << "NO\n";
        }
        for(int val : ans){
            cout << val <<" ";
        }
        cout <<"\n";
    }

    return 0;
}