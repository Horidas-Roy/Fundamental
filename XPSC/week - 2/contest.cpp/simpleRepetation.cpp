#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t; 
    while(t--){
        long long int x,k; cin >> x >> k;
        string s;
        long long int num = 0;
        while(k--){
            string y = to_string(x);
            s = s+y;
        }       
        for(int i=0; i<s.size(); i++){
            int digit = s[i] - '0';
            num = num*10 + digit;
        }
        bool flag = true;
        for(int i = 2; i*i <= num; i++){
             if(num % i == 0){
                 flag = false;
                 break;
             }
        }
        if(flag){
            cout << "YES" <<"\n";
        }
        else{
            cout << "NO" <<"\n";
        }
    }
    return 0;
}