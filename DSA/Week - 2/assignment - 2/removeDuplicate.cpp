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

int maxNum(Node* head){
    int mx = INT_MIN;
    while(head != NULL){
        if(mx < head->val){
            mx = head->val;
        }
        head = head->next;
    }
    return mx;
}

int minNum(Node* head){
    int mn = INT_MAX;
    while(head != NULL){
        if(mn > head->val){
            mn = head->val;
        }
        head = head->next;
    }
    return mn;
}

void printNode(Node* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int search(Node* head,int searchKey){
    int index = 0;
    bool flag = false;
    while(head != NULL){
        if(head->val == searchKey){
            flag = true;
            break;
        }
        index++;
        head = head->next;
    }
    return flag ? index : -1;
}

void sortNode(Node* head){
    for(Node* i=head; i->next != NULL; i=i->next){
        for(Node* j= i->next; j != NULL; j = j->next){
             if(i->val > j->val){
                   swap(i->val,j->val);
             }
        }
    }
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

    sortNode(head);
    printNode(head);
    Node* temp = head;
    int index = -1;
    while(temp->next->next != NULL){
        index++;
        if(temp->val == temp->next->val){
            if(index == 0){
                //deleteHead
            }
            else if(index == size(head)-1){
                //deleteLast
            }
            else if(index > 0 && index < size(head)-1){
                //deleteat any position
            }
        }
    }
        
    return 0;
}