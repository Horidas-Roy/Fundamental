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

void insert_at_tail(Node* &head,Node* &tail,int val){
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

void printList(Node* head){
     Node* temp = head;
     while(temp != NULL){
         cout << temp->val << " ";
         temp = temp->next;
     }
     cout << endl;
}

int size(Node* head){
    Node* temp = head;
    int count = 0;
     while(temp != NULL){
         count++;
         temp = temp->next;
     }
     return count;
}

void reverse(Node* head,Node* tail){
      Node* i = head;
      Node* j = tail;
      while(i != j && i->prev != j){
          swap(i->val,j->val);
          i = i->next;
          j = j->prev;
      }
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

   printList(head);
   reverse(head,tail);
   printList(head);
    
    
    
    
    return 0;
}