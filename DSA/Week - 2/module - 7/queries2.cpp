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



void delete_at_head(Node* &head, Node* &tail){
    if(head == NULL){
         return;
     }
     if(head == tail){
        delete head;
        head = NULL;
        tail = NULL;
        return;
     }
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

void delete_at_tail(Node* head,Node* &tail){
     if(head == NULL){
         return;
     }
     if(head == tail){
        delete head;
        head = NULL;
        tail = NULL;
        return;
     }

     Node* temp = head;
     while(temp->next != tail){
         temp = temp->next;
     }
     delete tail;
     tail = temp;
     tail->next = NULL;
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int t; cin >> t;
    int x,v;
    while(t--){
        cin >> x >> v;
        if(x == 0){
            insert_at_head(head,tail,v);
        }
        else if(x == 1){
            insert_at_tail(head,tail,v);
        }
        else{
            int sz = size(head);
            if(v == 0){
                delete_at_head(head,tail);
            }
            else if(v == sz-1){
                delete_at_tail(head,tail);
            }
            else if(v > 0 && v < sz-1){
                delete_at_position(head,v);
            }
        }
        printNode(head);
    }

    return 0;
}