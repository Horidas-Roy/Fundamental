#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    return __gcd(a,b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b; cin >> a >> b; 
    int lcm = (a/__gcd(a,b)) * b;
    cout << lcm*__gcd(a,b) <<"\n";
    cout << 16*24 <<"\n";

    return 0;
}