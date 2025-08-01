#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int rating = 0, coins = 0;
        vector<int> v(5);
        for(int i=0; i<5; i++){
            cin >> v[i];
            rating += v[i];
        }
        int required = 35 - rating;
        if(required <= 0){
            cout << 0 <<"\n";
            continue;
        }
        else{
            sort(v.begin(),v.end());
            for(int i=0; i<5; i++){
                if(required > 0){
                    required -= (10 - v[i]);
                    coins += 100;
                }
                else{
                    break;
                }
            }
        }
        cout << coins <<"\n";
    }

    return 0;
}