#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n;
        int minCost = 0;
        int division = n/4;
        int reminder = n%4;
        if(reminder == 0){
            cout << 400*division << endl;
        }
        else if(reminder == 1){
            if(division > 0){
                cout << (division-1)*400 + 500 << endl;
            }
            else cout << 200 << endl;
        }
        else if(reminder == 2){
            cout << division*400 + 200 << endl;
        }
        else{
            cout << division*400 + 300 << endl;
        }
        
    }

    return 0;
}