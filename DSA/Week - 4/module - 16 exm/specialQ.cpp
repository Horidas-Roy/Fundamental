#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    queue<string> q;
    int x;
    string s;
    while(t--){
        cin >> x;
        if( x == 0){
            cin >> s;
            q.push(s);
        }else{
            if(q.empty())
                cout << "Invalid" << endl;
            else{
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    return 0;
}