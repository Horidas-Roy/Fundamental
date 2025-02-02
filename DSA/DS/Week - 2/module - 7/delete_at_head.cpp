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

void insert_at_head(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if(tail == NULL){
        tail = newNode;
    }
}

void insert_at_tail(Node* &head,Node* &tail,int val){
     Node* newNode = new Node(val);
     if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
     }
     tail->next = newNode;
     tail = newNode;
}

int size(Node* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

void printNode(Node* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}



void delete_at_head(Node* &head){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_at_position(Node* head,int pos){
    Node* temp = head;
    for(int i=0; i<pos-1; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void delete_at_tail(Node* head,Node* &tail,int pos){
    Node* temp = head;
    for(int i=0; i<pos-1; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    tail = temp;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(1){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }

    printNode(head);
    delete_at_head(head);
    delete_at_position(head,2);
    delete_at_tail(head,tail,size(head)-1);
    printNode(head);
    // cout << head->val <<" " << tail->val;
        
    return 0;
}