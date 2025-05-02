#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int n; cin >> n;
     deque<string> dq(n);
     for(int i=0; i<n; i++){
        string s; cin >> s;
        auto it = find(dq.begin(),dq.end(),s);
        if(it != dq.end()){
             dq.erase(it);
        }
        dq.push_front(s);
     }
     string s = "";
     for(int i=0; i<dq.size(); i++){
        string word = dq[i];
        if(!word.empty()){
            s.push_back(*((word.rbegin())+1));
            s.push_back(*(word.rbegin()));
        }
     }
     cout << s <<"\n";
    return 0;
}