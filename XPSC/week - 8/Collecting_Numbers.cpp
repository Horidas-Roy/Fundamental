#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> v(n+1);
    for(int i=0; i<n ;i++){
        int x; cin >> x;
        v[x] = i;
    }
    int cnt = 1;
    for(int i=1; i<n ;i++){
        if(v[i] > v[i+1]){
            cnt++;
        }
    }
    cout << cnt ;
    return 0;
}