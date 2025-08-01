#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        string a,b; cin >> a >> b;
        int cnt = 0;
        for(int i=0, j=0; i<m && j<n; i++){
            if(b[i] == a[j]){
                j++;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}