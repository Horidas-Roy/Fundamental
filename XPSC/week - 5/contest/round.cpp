#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
    string n; cin >> n;
    int dotPosition = n.find('.');
    string integerPart = n.substr(0,dotPosition);
    string fractionalPart = n.substr(dotPosition+1);

    if(integerPart.back() == '9'){
        cout << "GOTO Vasilisa." ;
        return 0;
    }

    if(fractionalPart[0] < '5'){
        cout << integerPart ;
    }
    else{
        integerPart.back() = integerPart.back() + 1;
        cout << integerPart; 
    }
    return 0;
}