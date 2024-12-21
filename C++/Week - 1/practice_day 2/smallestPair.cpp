#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int n;
    for(int i=0; i<t; i++){
        cin >> n;
        int arr[n+1];
        for(int j=1; j<=n; j++){
             cin >> arr[j];
        }

        int smallestPair = INT_MAX;
        for(int j=1; j<n; j++){
            for(int k = j+1; k<=n; k++){
                  smallestPair = min(smallestPair,arr[j]+arr[k]+k-j);
            }
        }
        cout << smallestPair << endl;
    }
    return 0;
}