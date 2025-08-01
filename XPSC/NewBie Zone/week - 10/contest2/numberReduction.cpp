#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        while(1){
            if(x > 3){
                x -= 3;
            }
            else if(x%2 == 0){
                x /= 2;
            }
            else{
                break;
            }
        }
        cout << x <<"\n";
    }

    return 0;
}