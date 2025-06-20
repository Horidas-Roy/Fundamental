#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        int evenDays = 0, oddDays = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(i%2 == 0){
                evenDays += v[i];
            }
            else{
                oddDays += v[i];
            }
        }
        if(evenDays > oddDays){
            cout << evenDays <<"\n";
        }
        else cout << oddDays <<"\n";
    }

    return 0;
}