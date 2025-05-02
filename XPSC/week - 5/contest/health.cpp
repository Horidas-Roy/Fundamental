#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        float h,x,y; cin >> h >> x >> y;
        float attack = (h-y)/x + 1;
        cout << ceil(attack) <<"\n";
     }
    return 0;
}