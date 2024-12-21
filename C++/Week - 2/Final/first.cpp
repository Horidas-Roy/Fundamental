#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    string s,x;
    while(t--){
        cin >> s >> x;
        int pos = 0;
        while((pos = s.find(x,pos)) != -1){
            s.replace(pos,x.length(),"#");
            pos += 1;
        }
        cout << s << endl;
    }
    return 0;
}