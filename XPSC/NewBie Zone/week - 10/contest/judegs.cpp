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
        bool ok = true;
        for(int i=0; i<n; i++){
            if(v[i] <= 4){
                ok = false;
                break;
            }
        }
        if(ok)  cout << "YES\n";
        else cout <<"No\n";
       
    }

    return 0;
}