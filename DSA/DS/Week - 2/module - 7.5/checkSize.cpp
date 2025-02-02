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

void insertAtTail(Node* &head,Node* &tail,int val){
      Node* newNode = new Node(val);
      if(head == NULL){
          head = newNode;
          tail = newNode;
          return;
      }
      tail->next = newNode;
      tail = newNode;
}

void printNode(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val <<" ";
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

int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val;
    while(1){
        cin >> val;
        if(val == -1){
            break;
        }
        insertAtTail(head1,tail1,val);
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;
    while(1){
        cin >> val;
        if(val == -1){
            break;
        }
        insertAtTail(head2,tail2,val);
    }

    if(size(head1) == size(head2)){
         cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    
    return 0;
}