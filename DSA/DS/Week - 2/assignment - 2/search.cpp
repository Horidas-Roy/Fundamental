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
    int t; cin >> t;
    while(t--){
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
        int x; cin >> x;
        cout << search(head,x) << endl;
    }
    return 0;
}