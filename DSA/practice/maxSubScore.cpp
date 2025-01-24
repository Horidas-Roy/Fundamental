#include<bits/stdc++.h>
using namespace std;

int zeroCount(string s){
    int n = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '0'){
            n++;
        }
    }
    return n;
}
int oneCount(string s){
    int n = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1'){
            n++;
        }
    }
    return n;
}

int main(){
    string s;
    cin >> s;
    int mx = INT_MIN;
    for(int i=1; i<s.size(); i++){
        string l = s.substr(0,i);
        int left = zeroCount(l);
        string r = s.substr(i);
        int right = oneCount(r);
        mx = max(mx,left+right);
    }
    cout << mx <<endl;
    
    return 0;
}