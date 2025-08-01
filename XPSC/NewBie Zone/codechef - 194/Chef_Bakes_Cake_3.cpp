#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        sort(v.begin(),v.end());
        int mxProfit = 0;
        for(int i=0; i<n; i++){
            int x = v[i];
            int profit = 0;
            for(int j=0; j<n; j++){
                if(x <= v[j]){
                    profit += (20*x);
                }
                else{
                    profit += (50*(v[j]));
                    profit -= (30*x);
                }
            }
            mxProfit = max(mxProfit,profit);
        }
        cout << mxProfit << endl;
    }

    return 0;
}