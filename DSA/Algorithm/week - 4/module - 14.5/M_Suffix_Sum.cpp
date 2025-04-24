#include<bits/stdc++.h>
using namespace std;

long long int sum(vector<int> &v,int idx,int m){
    if(m == 0) return 0;
    return v[idx] + sum(v,idx-1,m-1); 
}

int main(){
    int n,m; cin >> n >> m;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << sum(v,n-1,m);
    return 0;
}