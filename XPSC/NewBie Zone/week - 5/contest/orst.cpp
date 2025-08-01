#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n,m; cin >> n >> m;
        vector<int> A(n),B(m);
        for(int i=0; i<n; i++){
            cin >> A[i];
        }
        for(int i=0; i<m; i++){
            cin >> B[i];
        }
        sort(B.begin(),B.end());
        int idx = B.back();
        sort(A.end()-idx,A.end());
        for(int x : A){
            cout << x <<" ";
        }
        cout <<"\n";
     }
    return 0;
}