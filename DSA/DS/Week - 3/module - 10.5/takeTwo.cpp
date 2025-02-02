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

void printList(Node* head){
     Node* temp = head;
     while(temp != NULL){
         cout << temp->val << " ";
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
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head1,tail1,val);
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head2,tail2,val);
    }
    
    int flag = true;
    if(size(head1) == size(head2)){
        Node* temp1 = head1;
        Node* temp2 = head2;
        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val != temp2->val){
                flag = false;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }else{
       flag = false;
    }

    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    
    return 0;
}