#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] != '#') continue;
        cout << i+1 ;
        cnt++;
        if(cnt == 1){
            cout <<",";
        }
        else{
            cout << "\n";
            cnt = 0;
        }
    }

    return 0;
}