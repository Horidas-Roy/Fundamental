#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x; cin >> n >> x;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int cnt = 0;
    int l = 0, r = n-1; 
    while(l <= r){
        if(v[l] + v[r] <= x){
            l++,r--;
        }
        else{
            r--;
        }
        cnt++;
    }
    cout << cnt << "\n";
    
    return 0;
}