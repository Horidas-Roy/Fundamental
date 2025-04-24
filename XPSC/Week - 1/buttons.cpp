#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin >> a >> b;
    int m = a + a-1;
    int n = b + b-1;
    int res = max({m,n,a+b});
    cout << res << endl;

    return 0;
}