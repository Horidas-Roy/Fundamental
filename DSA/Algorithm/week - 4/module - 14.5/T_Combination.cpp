#include<bits/stdc++.h>
using namespace std;
double fact(int n){
    if(n <= 1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n,r; cin >> n >> r;
    double res = (double) fact(n) / (fact(r)*fact(n-r));
    cout << res;
    return 0;
}