#include<bits/stdc++.h>
using namespace std;

long long int sum(vector<int> &v, int idx){
     if(idx < 0) return 0;
     return v[idx] + sum(v,--idx);
}

int main(){
    int n; cin >> n;
    if(n==0){
        cout << 0;
        return 0;
    }
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << sum(arr,n-1) << endl;
    return 0;
}