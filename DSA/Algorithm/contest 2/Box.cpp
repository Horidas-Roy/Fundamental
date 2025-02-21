#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int digit = 0, vowel = 0, consonant = 0;
        for(int i=0; i<s.size(); i++){
              if(s[i] >= '0' && s[i] <= '9'){
                  digit++;
              }else{
                 if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u'){
                    vowel++;
                 }else{
                    consonant++;
                 }
              }
        }
        int vowelBox = ceil((float)vowel/2.0);
        int consoBox = ceil((float)consonant/3.0);
        // cout << max({digit,vowelBox,consoBox}) << endl;

    }
    return 0;
}