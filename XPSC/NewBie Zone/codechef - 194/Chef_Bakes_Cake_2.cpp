#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> A(n),B(n);
        for(int i=0; i<n; i++) cin >> A[i];
        for(int i=0; i<n; i++) cin >> B[i];
        int totalCost = 0;
        for(int i=0; i<n; i++){
            if(A[i] > B[i]){
                totalCost += (A[i]-B[i]);
            }
        }
        cout << totalCost << endl;
    }

    return 0;
}