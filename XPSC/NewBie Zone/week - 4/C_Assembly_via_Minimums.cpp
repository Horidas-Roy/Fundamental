#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        int m = n*(n-1)/2;
        vector<int> b(m),a(n);
        for(int i=0; i<m; i++){
            cin >> b[i];
        }
        sort(b.begin(),b.end());
        int x = 1, idx = 0;
        int trackLength = n-x;
        for(int i=0; i<n; i++){
             a[idx++] = b[trackLength-1];
             x++;
             trackLength += n-x;
        }
        a[n-1] = 1000000000;
        for(int x : a){
            cout << x <<" ";
        }
        cout <<"\n";
     }
    return 0;
}