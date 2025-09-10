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
        int cnt = 1;
        int prev = v[0]%2;
        for(int i=1; i<n; i++){
            if(v[i]%2 != prev){
                cnt++;
                prev = v[i]%2;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}