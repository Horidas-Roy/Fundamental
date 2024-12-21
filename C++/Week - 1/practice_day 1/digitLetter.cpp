#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin >> ch;

    if(ch >= '0' && ch <= '9'){
         cout << "IS DIGIT";
    }else{
        cout << "ALPHA" <<endl;
        if(ch >= 'A' && ch <= 'Z'){
            cout << "IS CAPITAL";
        }else{
            cout << "IS SMALL";
        }
    }
    return 0;
}