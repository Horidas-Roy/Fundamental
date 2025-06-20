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
        sort(v.begin(),v.end());
        int num = 0;
        int op = 0;
        for(int i=0; i<n; i++){
            op += abs(v[i]-num);
            num++;
        }
        cout << op <<"\n";
    }

    return 0;
}