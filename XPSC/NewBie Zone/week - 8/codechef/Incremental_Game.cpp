#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    // t=1;
    while (t--){
        int x,y,k; cin >> x >> y >> k;
        int mx = max(x,y);
        int mn = min(x,y);
        int preRemoveStone = 0;
        // cout << mx <<' '<<mn <<"\n";
        if(mx >= k){
            mx = mx - k;
            preRemoveStone = k;
        }
        else{
            preRemoveStone = mx;
            mx = 0;
        }
        // cout << mx <<" "<<mn <<" "<<preRemoveStone;
        if(mx > preRemoveStone || mn > preRemoveStone){
            cout << "Bob" <<"\n";
        }
        else{
            cout << "Alice" <<"\n";
        }
    }
    

    return 0;
}