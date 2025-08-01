#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int fre[26] = {0};
    int sz = s.size();
    for(int i=0; i<sz; i++){
        char ch = s[i];
        int idx = ch - 'a';
        fre[idx] = 1;
    }

    for(int i=0; i<26; i++){
       if(fre[i] == 0){
          char ch = 'a'+i;
          cout << ch;
          return 0;
       }
    }
    cout << "None";

    return 0;
}