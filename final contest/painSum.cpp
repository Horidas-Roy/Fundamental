#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q; cin >> n >> q;
    vector<long long int> arr(n+1,0);
    int x = 1;
    int i = 1;
    while(i+2 <= n){
        arr[i] = x;
        arr[i+1] = x;
        arr[i+2] = x;
        x++;
        i += 3;
    }
    vector<long long int> prefixSum(n+1,0);
    prefixSum[1] = arr[1];
    for(int i=2; i<=n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    while(q--){
        int l,r; cin >> l >> r;
        long long int res = 0;
        if(l == 1){
            res = prefixSum[r];
        }else{
            res = prefixSum[r] - prefixSum[l-1];
        }
        cout << res <<"\n";
    }
    return 0;
}