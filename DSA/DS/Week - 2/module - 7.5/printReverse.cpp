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

void printReverse(Node* head){
    if(head == NULL){
        return;
    }
    printReverse(head->next);
    cout << head->val << " ";
}

int maxVal(Node* head){
     int maxVal = INT_MIN;
     while(head != NULL){
        if(maxVal < head->val){
            maxVal = head->val;
        }
        head = head->next;
     }
     return maxVal;
}

void sortNode(Node* head){
     for(Node* i = head; i->next != NULL; i=i->next){
        for(Node* j = i->next; j != NULL; j=j->next){
               if(i->val < j->val){
                     swap(i->val,j->val);
               }
        }
     }
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
    // int max = maxVal(head1);
    // cout << max << endl;

    sortNode(head1);
    printNode(head1);
    
    return 0;
}