#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        multiset<int> ml;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            ml.insert(x);
        }
        int minValue = *(ml.begin());
        int ans  = 1;
        while(!ml.empty()){
            auto it = ml.find(minValue);
            if(it != ml.end()){
                ml.erase(it);
                minValue = minValue + 1;
            }
            else{
                ans++;
                minValue = *(ml.begin());
            }
        }
        cout << ans << "\n";
    }
     
    return 0;
}