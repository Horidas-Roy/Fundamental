#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<long long int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end(),greater<long long int>());
    long long int target; cin >> target;
    int l = 0, r = n-1;
    bool flag = false;
    int mid;

    while(l<=r){
        mid = l+(r-l)/2;