#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int k,n,m; cin >> k >> n >> m;
        vector<int> a(n),b(m),ans;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<m; i++){
            cin >> b[i];
        }
        int i=0,j=0;
        bool flag = true;
        while(i < n || j<m){
            if(i<n && a[i] == 0){
                ans.push_back(a[i]);
                i++;
                k++;
            }
            else if(j<m && b[j] == 0){
                ans.push_back(b[j]);
                j++;
                k++;
            }
            else if(i<n && a[i] <= k){
                ans.push_back(a[i]);
                i++;
            }
            else if(j<m && b[j] <= k){
                ans.push_back(b[j]);
                j++;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag){
            for(int val : ans){
                cout << val <<" ";
            }
        }
        else{
            cout << -1;
        }
        cout <<"\n";
     }
    return 0;
}