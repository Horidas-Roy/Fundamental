#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long int n; cin >> n;
        int coin = 1;
        while(n > 3){
            coin *= 2;
            n = n/4;
        }
        cout << coin <<"\n";
    }
    return 0;
}