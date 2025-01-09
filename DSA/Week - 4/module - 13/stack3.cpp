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
    myStack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    st.pop();

    cout << st.size() << endl;
    while (!st.empty())
    {
        cout << st.top() <<" ";
        st.pop();
    }

    
    return 0;
}