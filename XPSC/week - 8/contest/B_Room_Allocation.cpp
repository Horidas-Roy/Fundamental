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
        int mnRoom = 0;
        for(int i=0; i<n; i++){
            mnRoom += ceil(v[i]/2.0);
        }
        cout << mnRoom <<"\n";
    }

    return 0;
}