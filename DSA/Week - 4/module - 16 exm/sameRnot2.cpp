#include<bits/stdc++.h>
using namespace std;

class myStack{
     public:
       vector<int> v;
       
       void push(int val){
           v.push_back(val);
       }

       void pop(){
           v.pop_back();
       }

       int top(){
           return v.back();
       }

       int size(){
         return v.size();
       }

       bool empty(){
          return v.empty();
       }
};

class Node{
    public:
       int val;
       Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class myQueue{
    public:
      Node* head = NULL;
      Node* tail = NULL;
      int sz = 0;

      void push(int val){
          sz++;
          Node* newNode = new Node(val);
          if(head == NULL){
             head = newNode;
             tail =  newNode;
             return;
          }
          tail->next = newNode;
          tail = newNode;
      }

      void pop(){
         sz--;
         Node* deleteNode = head;
         head = head->next;
         delete deleteNode;
         if(head == NULL){
            tail = NULL;
         }
      }

      int front(){
        return head->val;
      }
      int back(){
        return tail->val;
      }
      int size(){
         return sz;
      }
      bool empty(){
        return head == NULL;
      }
};

int main(){
    int n,m; cin >> n >> m;
    myStack st;
    myQueue q;
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