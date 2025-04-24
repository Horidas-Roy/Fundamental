#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int a,b,c; cin >> a >> b >> c;
        int count = 5;
        while(count--){
            if(a <= b && a <= c) a++;
            else if(b <= a && b <= c) b++;
            else c++;
        }
        cout << a*b*c <<"\n";
     }
    return 0;
}