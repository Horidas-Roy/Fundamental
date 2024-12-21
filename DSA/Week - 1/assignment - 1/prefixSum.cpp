#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long long int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    vector<long long int> prefixSum(n);
    prefixSum[0] = v[0];
    for(int i=1; i<n; i++){
         prefixSum[i] = prefixSum[i-1] + v[i];
    }
    reverse(prefixSum.begin(),prefixSum.end());
    for(int i=0; i<n; i++){
        cout << prefixSum[i] <<" ";
    }
    
    return 0;
}