#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int num = 0;
        for(int i=0; i<4; i++){
            char ch = s[i];
            num = num*10 + ch - '0';
        }
        int y = num%100;
        int x = num/100;
        // if(pow(x+y,2) == num){
        //     cout << x <<" "<<y <<"\n";
        //     continue;
        // }
        x = sqrt(num);
        if(x*x == num){
            if(x%2 == 0){
                cout << x/2 - 1 <<" "<< x/2+1 <<"\n";
            }
            else{
                cout << x/2 <<" "<< x/2+1 <<"\n";
            }
        }
        else{
            cout << -1 << "\n";
        }
    }

    return 0;
}