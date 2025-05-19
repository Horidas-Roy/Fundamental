#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int x,y; cin >> x >> y;

        if( y == 0){
            cout << ceil(x/15.0) <<"\n";
            continue;
        }

        int screen_for_y = ceil(y/2.0);
        int remain_x = 0;
        if(y%2 == 0){
            remain_x = x - screen_for_y * 7;
        }
        else{
            remain_x = x - (screen_for_y-1)*7 - 11;
        }
        int ans = screen_for_y;
        if(remain_x > 0){
            ans += ceil(remain_x/15.0);
        }
        cout << ans <<"\n";
    }

    return 0;
}