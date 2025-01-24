#include<bits/stdc++.h>
using namespace std;
long long int factorial(long long int n){
     if(n == 1 || n == 0){
        return 1;
     }
     return n*factorial(n-1);
}
int main(){
    int n; cin >> n;
    string result = " "+factorial(n);
    int count = 0;
    
    cout << result;
    return 0;
}