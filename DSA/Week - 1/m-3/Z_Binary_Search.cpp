#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    while(q--){
        int target;
        cin >> target;
        int l=0, r=n-1;
        int flag = -1;  
        while(l<=r){
             int mid = l+(r-l)/2;
             if(arr[mid] == target){
                 flag = 1;
                 break;
             }
             else if(arr[mid] < target){
                  l = mid + 1;
             }else{
                r = mid - 1;
             }
        }
        if(flag == 1){
            cout << "found" << endl;
        }else{
            cout << "not found" << endl;
        }
    }
    return 0;
}