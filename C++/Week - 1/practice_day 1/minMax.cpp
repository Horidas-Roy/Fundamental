#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int minNum = min(a,min(b,c));
    int maxNum = max(a,max(b,c));
    cout << minNum << " " << maxNum;
    
    return 0;
}