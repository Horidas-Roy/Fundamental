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
        ll totalSum = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            totalSum += v[i];
        }
        ll targetSum = totalSum/n;
        ll prefixSum = 0;
        bool possible = true;
        for(int i=0; i<n; i++){
            prefixSum += v[i];
            ll expected = (i+1)*targetSum;
            if(expected > prefixSum){
                possible = false;
                break;
            }
        }
        if(possible){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}