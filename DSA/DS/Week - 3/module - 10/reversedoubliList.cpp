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

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val <<" ";
        temp = temp->next;
    }
    cout << endl;
}

void reverseDoubliList(Node* &head, Node* &tail){
     Node* i = head;
     Node* j = tail;
     while(i != j && i->prev != j){
         swap(i->val,j->val);
         i = i->next;
         j = j->prev;
     }
}

bool hasCycle(Node* head){
     Node* slow = head;
     Node* fast = head;
     while(fast != NULL && fast->next != NULL){
         slow = slow->next;
         fast = fast->next;
         if(slow == fast){
            return true;
         }
     }
     return false;
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = new Node(50);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = tail;
    tail->prev = c;
    tail->next = head;
    
    // reverseDoubliList(head,tail);
    // printList(head);

    cout << hasCycle(head) << endl;

    return 0;
}