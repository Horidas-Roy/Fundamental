#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
       int val;
       Node* prev;
       Node* next;

    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_position(Node* head,int idx, int val){
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i=1; i<idx; i++){
         temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void insert_at_tail(Node* &head,Node* &tail, int val){
      Node* newNode = new Node(val);
      if(head == NULL){
          head= newNode;
          tail = newNode;
          return;
      }
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
}

void delete_at_head(Node* &head,Node* &tail){
      Node* deleteNode = head;
      head = head->next;
      delete deleteNode;
      if(head == NULL){
          tail = NULL;
          return;
      }
      head->prev = NULL;
}

void delete_at_position(Node* head,int idx){
      Node* temp = head;
      for(int i=1; i<idx; i++){
         temp = temp->next;
      }
      Node* deleteNode = temp->next;
      temp->next = temp->next->next;
      temp->next->prev = temp;
      delete deleteNode;
}

void delete_at_tail(Node* &head,Node* &tail){
      Node* deleteNode = tail;
      tail = tail->prev;
      delete deleteNode;
      if(tail == NULL){
          head = NULL;
          return;
      }
      tail->next = NULL;
}

void print_forward(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }

    print_forward(head);
    
    return 0;
}