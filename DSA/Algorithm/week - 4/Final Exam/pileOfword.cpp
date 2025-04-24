#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s1,s2; cin >> s1 >> s2;
        vector<int> freq1(26,0); 
        vector<int> freq2(26,0); 
        for(char ch : s1){
             int idx = ch - 'a';
             freq1[idx] += 1;
        }
        for(char ch : s2){
             int idx = ch - 'a';
             freq2[idx] += 1;
        }
        if(freq1 == freq2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}