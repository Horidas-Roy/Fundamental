#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long int arr[n-2];
        long long int nextSum = 0;
        for(int i=0; i<n-2; i++){
            cin >> arr[i];
            nextSum += arr[i];
        }
        long long int prevSum; cin >> prevSum;
        long long int diff = prevSum - nextSum;
        cout << diff + 1 << endl;
    }
    return 0;
}