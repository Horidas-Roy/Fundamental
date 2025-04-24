#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        float x,y,z; cin >> x >> y >> z;
        float days = (x*y)/1440;
        if(days <= z){
            cout << "YES\n"; 
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}