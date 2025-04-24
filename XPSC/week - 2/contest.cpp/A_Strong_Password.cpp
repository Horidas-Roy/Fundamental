#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int flag = 1;
        for(int i=0, j=i+1; i<s.size()-1;i++,j++){
            if(s[i] == s[j]){
                char ch = s[i];
                if(ch < 'z'){
                    s.insert(j,1,ch+1);
                }
                else{
                    s.insert(j,1,ch-1);
                }
                flag = 0;
                break;
            }
        }
        if(flag){
            char ch = s.back();
            if(ch < 'z'){
                s.push_back(ch+1);
            }
            else{
                s.push_back(ch-1);
            }
        }
        cout << s <<"\n";
    }
    return 0;
}