#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    char s,q;
    cin >> a >> s >> b >> q >> c;

    if(s == '+' && a+b == c && q == '='){
        cout << "Yes" << endl;
    }
    else if(s == '-' && a-b == c && q == '='){
          cout << "Yes" << endl;
    }
    else if(s == '*' && a*b == c && q == '='){
          cout << "Yes" << endl;
    }else{
        if(s == '+'){
            cout << a+b << endl;
        }else if(s == '-'){
            cout << a-b << endl;
        }else{
            cout << a*b << endl;
        }
    }
    return 0;
}