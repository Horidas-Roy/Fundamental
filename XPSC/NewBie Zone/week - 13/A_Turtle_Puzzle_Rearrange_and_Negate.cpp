#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum += abs(v[i]);
        }
        cout << sum << endl;
    }

    return 0;
}