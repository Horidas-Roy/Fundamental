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

void insert_at_position(Node* head,int idx,int val){
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

bool isPallingdrome(Node* head,Node* tail){
    Node* i = head;
    Node* j = tail;
    while(i != j  && i->prev != j){
         if(i->val != j->val){
            return false;
         }
         i = i->next;
         j = j->prev;
    }
    return true;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    
    int q; cin >> q;
    int x,v; 
    while(q--){
       cin >> x >> v;
       int sz = size(head);
       int flag = 1;
       if(x == 0){
           insert_at_head(head,tail,v);
       }
       else if(x == sz){
           insert_at_tail(head,tail,v);
       }
       else if(x > 0 && x < sz){
           insert_at_position(head,x,v);
       }else{
          flag = 0;
       }

       if(flag){
          print_forward(head);
          print_backward(tail);
       }else{
          cout << "Invalid" << endl;
       }
    }
    
    return 0;
}