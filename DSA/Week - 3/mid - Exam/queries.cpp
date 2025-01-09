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
void insert_at_tail(Node* &head,Node* &tail,int val){
     Node* newNode = new Node(val);
     if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
     }
     tail->next = newNode;
     newNode->prev = tail;
     tail = tail->next;
}

void insert_at_index(Node* head,int idx,int val){
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

int size(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void printForward(Node* head){
     Node* temp = head;
     while(temp != NULL){
        cout << temp->val <<" ";
        temp = temp->next;
     }
     cout << endl;
}
void printBackward(Node* tail){
     Node* temp = tail;
     while(temp != NULL){
        cout << temp->val <<" ";
        temp = temp->prev;
     }
     cout << endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int q; cin >> q;
    int x,v;
    while(q--){
        cin >> x >> v;
        int sz = size(head);
        if(x < 0 || x > sz){
            cout << "Invalid" << endl;
            continue;
        }
        else if(x == 0){
            insert_at_head(head,tail,v);
        }
        else if(x == sz){
            insert_at_tail(head,tail,v);
        }
        else{
            insert_at_index(head,x,v);
        }
        cout << "L -> ";
        printForward(head);
        cout << "R -> ";
        printBackward(tail);
    }
    
   
    return 0;
}