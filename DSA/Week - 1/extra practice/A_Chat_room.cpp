#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string x = "hello";
    bool flag = false;
    for(int i=0,j=0; i<s.size(); i++){
         if(s[i] == x[j]){
             j++;
         }
         if(j == 5){
            flag = true;
         }
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}