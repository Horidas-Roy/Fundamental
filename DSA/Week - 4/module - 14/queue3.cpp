#include<bits/stdc++.h>
using namespace std;

class myQueue{
    public:
       list<int> l;
       
       void push(int val){
           l.push_back(val);
       }
       void pop(){
           l.pop_front();
       }
       
       int front(){
         return l.front();
       }

       int back(){
         return l.back();
       }

       int size(){
          return l.size();
       }

       bool empty(){
          return l.empty();
       }
};

int main(){
    myQueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << q.front() <<" "<<q.back()<<" "<<q.size()<<endl;
    while(!q.empty()){
        cout << q.front() <<" ";
        q.pop();
    }
    return 0;
}