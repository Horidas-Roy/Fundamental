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

Node* input(){
    int val; cin >> val;
    if(val == -1) return NULL;
    Node* root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        //1. Node ber kore ana
        Node* p = q.front();
        q.pop();
        
        //2.oi node niye kaj 
        int l,r; cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if(l != -1)
            myLeft = new Node(l);
        else
            myLeft = NULL;
        if(r != -1)
            myRight = new Node(r);
        else
            myRight = NULL;
        
        p->left = myLeft;
        p->right = myRight;


        //3.children push kora
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

Node* input2(){
    int val; cin >> val;
    if(val == -1) return NULL;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        int l,r; cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);
        p->left = myLeft;
        p->right = myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

void level_order(Node* root){
    if(root == NULL){
        cout << "NULL";
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();
        cout << p->val <<" ";
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }   
}

int count_nodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l+r+1;
}

int count_leaf_nodes(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    return l+r;
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r)+1;
}

int main(){
    Node* root = input2();
    // level_order(root);
    // cout << count_nodes(root) << endl;
    // cout << count_leaf_nodes(root) << endl;
    cout << height(root) << endl;
    return 0;
}