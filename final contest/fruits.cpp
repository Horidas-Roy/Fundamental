#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q; cin >> n >> q;
    long long int arr[n+1];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    long long int prefixSum[n+1];
    prefixSum[1] = arr[1];
    for(int i=2; i<=n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    while(q--){
        int l,r; cin >> l >> r;
        long long int result = 0;
        if(l == 1){
            result = prefixSum[r];
        }
        else{
            result = prefixSum[r] - prefixSum[l-1];
        }
        cout << result << endl;
    }
    return 0;
}