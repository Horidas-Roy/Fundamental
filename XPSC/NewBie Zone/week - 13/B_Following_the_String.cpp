#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        char ch = 'a';
        string newStr = "";
        for(int i=0; i<n; i++){
            if(v[i] == 0){
                newStr += ch;
                ch += 1;
            }
            else{
                if(i>0) newStr += (ch-1);
            }
        }
        cout << newStr << endl;
    }

    return 0;
}