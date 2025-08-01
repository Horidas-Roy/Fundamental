#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n-1);
        for(int i=0; i<n-1; i++){
            cin >> v[i];
        }
        vector<int> a(n);
        a[0] = v[0];
        for(int i=1; i<n-1; i++){
             a[i] = v[i-1] | v[i];
        }
        a[n-1] = v[n-2];
        bool posible = true;
        for(int i=0; i<n-1;i++){
             if(v[i] != (a[i] & a[i+1])){
                  posible = false;
                  break;
             }
        }
        if(!posible){
            cout << -1 <<"\n";
        }
        else{
            for(int x : a){
                cout << x <<" ";
            }
            cout <<"\n";
        }
    }

    return 0;
}