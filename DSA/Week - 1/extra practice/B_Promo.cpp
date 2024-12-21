#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q; cin >> n >> q;
    vector<int> v(n);
    for(int i=0; i<n; i++){
         cin >> v[i];
    }

    sort(v.begin(),v.end());

    vector<long long int> prefixSum(n);
    prefixSum[0] = v[0];
    for(int i=1; i<n; i++){
          prefixSum[i] = prefixSum[i-1] + v[i];
    }
    while(q--){
        int x,y; cin >> x >> y;
        
        int startingFreeIdx = n - x;
        int endingFreeIdx = startingFreeIdx + y -1;
        long long int maxSum = 0;
        if(startingFreeIdx == 0){
           maxSum = prefixSum[endingFreeIdx];
        }
        else{
          maxSum = prefixSum[endingFreeIdx] - prefixSum[startingFreeIdx-1];
        }

        cout << maxSum << endl;
        
    }
    return 0;
}