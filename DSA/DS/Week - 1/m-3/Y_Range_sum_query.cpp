#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >>q;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
         cin >> v[i];
    }

    vector<long long int> prefixSum(n+1);
    prefixSum[1] = v[1]; 
    for(int i=2; i<=n; i++){
         prefixSum[i] = prefixSum[i-1] + v[i];
    }
    
    while(q--){
         int l,r;
         cin >> l >> r;
         long long int sum = 0;
         if(l == 1){
             sum = prefixSum[r];
         }else{
            sum = prefixSum[r] - prefixSum[l-1];
         }
         cout << sum << endl;
    }
    return 0;
}