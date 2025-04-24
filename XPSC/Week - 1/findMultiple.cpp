#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c; cin >> a >> b >> c;
    if(a <= c*4 && c*4 <= b){
        cout << c*4 << endl;
    }
    else if(a <= c*3 && c*3 <= b){
        cout << c*3 << endl;
    }
    else if(a <= c*2 && c*2 <= b){
        cout << c*2 << endl;
    }
    else if(a <= c && c <= b){
        cout << c << endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}