#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        v[i] = x;
    }
    reverse(v.begin(),v.end());
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    return 0;
}