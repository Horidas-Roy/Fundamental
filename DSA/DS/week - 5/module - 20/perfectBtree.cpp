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
     q.push(root);
     while(!q.empty()){
        Node* parent = q.front();
        q.pop();
        
        int l,r; cin >> l >> r;
        Node* myLeft; 
        Node* myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);
        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
     }
     return root;
}

void level_order(Node* root){
    if(root == NULL) return;
     queue<Node*> q;
     q.push(root);
     while(!q.empty()){
        Node* parent = q.front();
        q.pop();
        cout << parent->val <<" ";
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
     }
}

bool isPerfect(Node* root){
    if(root == NULL) return true;
    if(root->left != NULL && root->right == NULL)
        return false;
    if(root->left == NULL && root->right != NULL)
        return false;
    bool l = isPerfect(root->left);
    bool r = isPerfect(root->right);
    return l && r;
}

int main(){
    Node* root = input();
    bool result = isPerfect(root);
    if(result) cout << "YES";
    else cout <<"NO";
    return 0;
}