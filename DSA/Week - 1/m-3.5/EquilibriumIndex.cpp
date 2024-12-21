#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> prefixSum(n);
    prefixSum[0] = v[0]; 
    for (int i = 1; i < n; i++)
    {
         prefixSum[i] = prefixSum[i-1] + v[i];
    }

    for (int i = 0; i < n; i++)
    {   
        int leftSum = i == 0 ? 0 : prefixSum[i-1];
        int rightSum = prefixSum[n-1] - prefixSum[i];
        if(leftSum == rightSum){
              cout << i << endl;
              break;
        }
    }
    return 0;
}