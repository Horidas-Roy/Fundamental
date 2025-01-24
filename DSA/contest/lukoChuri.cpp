#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int maxCount = 0;
    int curCount = 1;
    for(int i=0; i<s.size()-1; i++){
        if(s[i] == s[i+1])
        {   
            curCount++;
        }
        else{
            maxCount = max(maxCount,curCount);
            curCount = 1;
        }
    }
    maxCount = max(maxCount,curCount);
    cout << maxCount;
    return 0;
}