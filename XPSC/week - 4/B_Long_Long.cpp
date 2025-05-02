#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        vector<int> v(n);
        long long mxSum = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            mxSum += abs(v[i]);
        }
        int operation = 0;
        int l = 0;
        while(l<n){
            if(v[l] < 0){
                operation++;
                while(1){
                    if(v[l] > 0){
                        break;
                    }
                    else{
                        l++;
                    }
                }
            }
            l++;
        }
        cout << mxSum <<" "<<operation <<"\n";
     }
    return 0;
}