#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
       int val;
       Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void reversesinglyList(Node* &head,Node* &tail,Node* temp){
    if(temp->next == NULL){
        head = temp;
        return;
    }
    reversesinglyList(head,tail,temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val <<" ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = tail;
    tail->next = NULL;
    
    reversesinglyList(head,tail,head);
    printList(head);
    return 0;
}