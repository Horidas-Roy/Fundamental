

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

void insertFirst(Node* &head,int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertLast(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    // tail = tail->next;
}

void insertAtIndex(Node* head,int idx, int val){
      Node* newNode = new Node(val);
      for(int i=1; i<idx-1; i++){
          head = head->next;
      }
      newNode->next = head->next;
      head->next = newNode;
}

void print(Node* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int size(Node* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
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
        insertLast(head,tail,val);
    }
    
    int idx,insertVal;
    int t = 7;
    while(t--){
        cin >> idx >> insertVal;

        if(idx == 0){
            insertFirst(head,insertVal);
        }
        else if(idx == size(head)){
            insertLast(head,tail,insertVal);
        }
        else if(0 < idx && idx < size(head)){
            insertAtIndex(head,idx,insertVal);
        }else{
            cout << "Invalid" << endl;
            continue;
        }
        print(head);
    }
    return 0;
}