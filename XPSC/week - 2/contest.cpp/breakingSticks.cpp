#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int brek = 0;
        for(int i=0; i<n; i++){
            brek += arr[i]-1;
        }
        cout << brek << "\n";
    }
    return 0;
}