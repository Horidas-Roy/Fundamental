#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,k; cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int flag = 1;
        for(int i=0; i<n; i++){
            if(b[i] != -1){
                if(a[i] - b[i] == a[i]){
                    cout << 0 <<"\n";
                }
                else{
                    cout << abs(a[i] - b[i]) <<"\n";
                }
                flag = 0;
                break;
            }
        }
        if(!flag) continue;
        auto mn = min_element(a.begin(),a.end());
        auto mx = max_element(a.begin(),a.end());
        cout << *mn+k - *mx + 1 <<"\n";
     }
    return 0;
}