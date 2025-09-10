#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        ll distance = 0;
        for(int i=0; i<n; i++){
            if(v[i] > m/2){
                distance += v[i]-1;
            }
            else{
                distance += m-v[i];
            }
        }
        cout << distance << endl;
    }

    return 0;
}