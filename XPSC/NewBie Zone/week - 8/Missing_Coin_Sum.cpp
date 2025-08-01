#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<long long> coins(n);
    for(int i=0; i<n; i++){
        cin >>  coins[i];
    }
    sort(coins.begin(),coins.end());
    long long target = 1;
    for(int i=0; i<n; i++){
        if(target < coins[i]){
             break;
        }
        else{
            target += coins[i];
        }
    }

    cout << target;

    return 0;
}