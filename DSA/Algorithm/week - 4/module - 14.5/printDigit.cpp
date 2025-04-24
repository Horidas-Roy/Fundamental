#include<bits/stdc++.h>
using namespace std;
void print_digit(int n){
    if(n == 0) return;
    int x = n%10;
    print_digit(n/10);
    cout << x <<" ";
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n == 0){
            cout << n << endl;
        }else{
            print_digit(n);
            cout << endl;
        }
    }
    return 0;
}