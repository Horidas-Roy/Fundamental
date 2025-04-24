#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int x = n;
    int digit = 0;
    while(x != 0){
        digit++;
        x /= 10;
    }
    
    if(n==0) digit++;

    for(int i=0; i<4-digit; i++){
        cout << 0;
    }
    cout << n;
    return 0;
}