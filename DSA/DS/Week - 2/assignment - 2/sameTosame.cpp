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

int main(){

    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val;
    while(1){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head1,tail1,val);
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;
    while(1){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head2,tail2,val);
    }
    
    bool flag = true;
    if(size(head1) == size(head2)){
        Node* temp1 = head1;
        Node* temp2 = head2;
        for(int i=1; i<=size(head1); i++){
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

    // printNode(head1);
    // printNode(head2);

    if(flag == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
        
    return 0;
}