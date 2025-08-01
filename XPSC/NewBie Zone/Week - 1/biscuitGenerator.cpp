#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,t;
    cin >> a >> b >> t;
    int biscuits = 0;
    if(t < a){
        cout << biscuits;
    }
    else{
        int mul = 1;
        while(1){
            if(a*mul <= t){
                biscuits += b;
                mul++;
            }
            else{
                break;
            }
        }
        cout << biscuits;
    }
    return 0;
}