#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        vector<int> v(n);
        int totalWater = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            totalWater += v[i];
        }
        float requiredBottle = ceil(1.0*totalWater/x);
        cout << requiredBottle << endl;
    }

    return 0;
}