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

void sortlist(Node* head){
    for(Node* i = head; i->next != NULL; i = i->next){
        for(Node* j = i->next; j != NULL; j = j->next){
                 if(i->val > j->val){
                     swap(i->val,j->val);
                 }
        }
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;;
        }
        insert_at_tail(head,tail,val);
    }

    print_forward(head);
    sortlist(head);
    print_forward(head);
    
    return 0;
}