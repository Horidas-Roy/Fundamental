#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
       int val;
       Node* left;
       Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void pre_order(Node* root){
     if(root == NULL){
        return;
     }
     cout << root->val <<" ";
     pre_order(root->left);
     pre_order(root->right);
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->val <<" ";
    inorder(root->right);
}

void post_order(Node* root){
    if(root == NULL){
        return;
    }
    post_order(root->left);
    post_order(root->right);
    cout << root->val <<" ";
}

void level_order(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        cout << p->val << " ";
        
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
}


int main(){
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    pre_order(root);
    cout << endl;
    inorder(root);
    cout << endl;
    post_order(root);
    cout << endl;
    level_order(root);
    return 0;
}