#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    vector<int> freqVector(26,0);
    for(int i=0; i<s.size(); i++){
          char ch = s[i];
          int index = ch - 'a';
          freqVector[index] += 1;
    }

    for(int i=0; i<26; i++){
          if(freqVector[i] != 0){
               char ch = 'a'+ i;
               cout << ch <<" : "<<freqVector[i]<<endl;
          }
    }

    return 0;
}