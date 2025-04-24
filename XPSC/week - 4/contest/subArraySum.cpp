#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int mxSum = 0, currentSum = 0;
        for(int i=0; i<n; i++){
            currentSum = max(currentSum,currentSum+v[i]);
            mxSum = max(mxSum,currentSum);
        }
        if(mxSum <= 0){
            cout << 0 <<"\n";
            continue;
        }
        int operation = 0;
        for(int i=0; i<n; i++){
            if(v[i] < 0){
                operation++;
            }
        }
        cout << operation <<"\n";
     }
    return 0;
}