#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        
        if(a[n-1] == a[0]){
            cout << 0 << endl;
        }
        else{
            cout << a[n-1] - a[0] -1 << endl;
        }
    }

    return 0;
}