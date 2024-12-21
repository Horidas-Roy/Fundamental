#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    size_t pos = 0;
    while ((pos = s.find("EGYPT",pos)) != string::npos)
    {
        s.replace(pos,5," ");
        pos += 1;
    }
    cout << s;
    return 0;
}