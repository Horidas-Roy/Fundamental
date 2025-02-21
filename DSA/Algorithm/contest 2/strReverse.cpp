#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    s[0] =  tolower(s[0]);
    int sz = s.size();
    int l = 0, r = sz-1;
    while(l<r){
         swap(s[l],s[r]);
         l++;
         r--;
    }

    cout << s;
    return 0;
}