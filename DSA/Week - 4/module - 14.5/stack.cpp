#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
       int val;
       Node* next;
       Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack{
    public:
      Node* head = NULL;
      Node* tail = NULL;
      int sz = 0;

      void push(int val){
          sz++;
          Node* newNode = new Node(val);
          if(head == NULL){
             head = newNode;
             tail = newNode;
             return;
          }
          tail->next = newNode;
          newNode->prev = tail;
          tail = newNode;
      }
      void pop(){
        sz--;
         Node* deleteNode = tail;
         tail = tail->prev;
         delete deleteNode;
         if(tail == NULL){
            head = NULL;
            return;
         }
         tail->next = NULL;
      }
      int top(){
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
    int n; cin >> n;
    myStack st1;
    while(n--){
        int x; cin >> x;
        st1.push(x);
    }
    int m; cin >> m;
    myStack st2;
    while(m--){
        int x; cin >> x;
        st2.push(x);
    }
    if(st1.size() == st2.size()){
        bool isequal = true;
        while(!st1.empty()){
             if(st1.top( ) != st2.top()){
                isequal = false;
                break;
             }
             st1.pop();
             st2.pop();
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