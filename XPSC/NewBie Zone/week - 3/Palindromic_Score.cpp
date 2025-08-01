#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t; cin >> t;
     while(t--){
        int x,y,z; cin >> x >> y >> z;
        string s;
        while(x--){
            s.push_back('A');
        }
        while(y--){
            s.push_back('B');
        }
        while(z--){
            s.push_back('C');
        }
        if(z){
            while(z--){
                s.pop_back();
            }
            
        }
        else if(y){
            while(y--){
                s.pop_back();
            }
        }
        else if(x){
            while(x--){
                s.pop_back();
            }
        }
        cout << s <<"\n";
     }
    return 0;
}