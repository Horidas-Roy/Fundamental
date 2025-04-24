#include<bits/stdc++.h>
using namespace std;

bool reach(long long int t){
     while (t > 0)
     {
        if( t % 3 == 0 || t % 4 == 0) return true;
        t = t-4;
     }
     return t == 0;
}

int main(){
    long long int t; cin >> t;
    if(reach(t)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}