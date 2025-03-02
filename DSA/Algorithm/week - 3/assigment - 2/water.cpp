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
        int mx = arr[0], secondMx = INT_MIN;
        int idx1 = 0,idx2 = -1;
        for(int i=1; i<n; i++){
            if(arr[i] >= mx && arr[i] >= secondMx){
                 secondMx = mx;
                 mx = arr[i];
                 idx2 = idx1;
                 idx1 = i;
            }
            else if(arr[i] < mx && arr[i] >= secondMx){
                secondMx = arr[i];
                idx2 = i;
            }
        }
        if(idx1 <= idx2){
            cout << idx1 <<" "<< idx2 << "\n";
        }else{
            cout << idx2 <<" "<< idx1 << "\n";
        }
    }
    return 0;
}