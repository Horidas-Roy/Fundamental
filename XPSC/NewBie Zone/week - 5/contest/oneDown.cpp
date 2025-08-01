#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int n; cin >> n;
        string S,T; cin >> S >> T;
        int one_of_s = 0, zero_of_t = 0, one_of_t = 0;
        for(int i=0; i<n; i++){
            if(S[i] == '1') one_of_s++;
            if(T[i] == '0') zero_of_t++;
            if(T[i] == '1') one_of_t++;
        }

        one_of_s = one_of_s - one_of_t;
        
        bool possible = true;

        for(int i=0; i<n; i++){
            if(T[i] == 1 && S[i] != 1){
                possible = false;
                break;
            }
        }

        if(possible && one_of_s >= 0 && one_of_s%2 == 0){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
     }
    return 0;
}