#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    queue<int> q;
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        st.push(x);
    }
    int m; cin >> m;
    while(m--){
        int x; cin >> x;
        q.push(x);
    }
    if(st.size() == st.size()){
        bool isequal = true;
        while(!st.empty()){
             if(st.top( ) != q.front()){
                isequal = false;
                break;
             }
             st.pop();
             q.pop();
        }
        if(isequal){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}