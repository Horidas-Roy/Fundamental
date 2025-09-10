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
        int pass = 0;
        for(int i=0; i<n; i++){
            if(v[i] >= v[0]) pass++;
        }
        cout << pass << endl;
    }

    return 0;
}