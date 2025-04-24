#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        int result = ((100-x)/10)*10;
        cout << result << "\n";
    }
    return 0;
}