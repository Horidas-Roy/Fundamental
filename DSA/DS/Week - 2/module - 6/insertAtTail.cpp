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

void insertAtHead(Node* &head,int val){
     Node* newNode = new Node(val);
     newNode->next = head;
     head = newNode;
}

void insertAtIndex(Node* head,int idx,int val){
      Node* newNode = new Node(val);
      for(int i=1; i<idx-1; i++){
          head = head->next;
      }
      newNode->next = head->next;
      head->next = newNode;
}

//without optimize
/*void insertAtTAil(Node* &head,int val){
     Node* newNode = new Node(val);
     if(head == NULL){
        head = newNode;
        return;
     }
     Node* temp = head;
     while(temp->next != NULL){
          temp = temp->next;
     }
     temp->next = newNode;
}*/

//with optimize
void insertAtTAil(Node* &head,Node* &tail,int val){
     Node* newNode = new Node(val);
     if(head == NULL){
        head = newNode;
        return;
     }
     tail->next = newNode;
    //  tail = tail->next;
     tail = newNode;

}

void printLinkedList(Node* head){
     while(head != NULL){
        cout << head->val << " ";
        head = head->next;
     }
     cout << endl;
}

void printReverse(Node* head){
     if(head == NULL){
        return;
     }
     printReverse(head->next);
     cout << head->val << " ";
}

int main(){
    Node* head = new Node(10);
    Node* tail = head;
    insertAtTAil(head,tail,20);
    insertAtTAil(head,tail,30);
    insertAtTAil(head,tail,40);
    insertAtTAil(head,tail,50);
    insertAtHead(head,0);
    insertAtIndex(head,4,100);

    printLinkedList(head);
    printReverse(head);
    
    return 0;
}