#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        q.push(x);
    }
    
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        cout << st.top() <<" ";
        q.push(st.top());
        st.pop();
    }

    return 0;
}