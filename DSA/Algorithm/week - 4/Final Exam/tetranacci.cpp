#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int arr[65];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 2;
    int n; cin >> n;
    for(int i = 4; i<=n; i++){
        arr[i] = arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4];
    }
    cout << arr[n];
    return 0;
}