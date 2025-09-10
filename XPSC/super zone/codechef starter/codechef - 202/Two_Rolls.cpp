#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int x,y; cin >> x >> y;
        bool posible = false;
        for(int i = y; (i<=y+5 && !posible); i++){
            for(int j=i; j<=y+5; j++){
                if( x+i+j == 50){
                    posible = true;
                    break;
                }
            }
        }
        if(posible) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}