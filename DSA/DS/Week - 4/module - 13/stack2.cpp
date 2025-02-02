#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:
     list<int> l;

     void push(int val){
         l.push_back(val);
     }
     void pop(){
        l.pop_back();
     }

     int top(){
        return l.back();
     }

     int size(){
        return l.size();
     }

     bool empty(){
         return l.size();
     }
};

int main(){
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();

    cout << st.top() <<" "<< st.size() <<endl;
    
    return 0;
}