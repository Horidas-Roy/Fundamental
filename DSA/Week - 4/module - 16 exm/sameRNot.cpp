#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n >> m;
    stack<int> st;
    queue<int> q;
    int val;
    while(n--){
        cin >> val;
        st.push(val);
    }
    while(m--){
        cin >> val;
        q.push(val);
    }

    if(st.size() == q.size()){
        bool equal = true;
        while(!st.empty()){
            if(st.top() != q.front()){
                equal = false;
                break;
            }
            st.pop();
            q.pop();
        }
        if(equal) 
           cout << "YES";
        else 
           cout << "NO";

    }else{
        cout << "NO";
    }
    return 0;
}