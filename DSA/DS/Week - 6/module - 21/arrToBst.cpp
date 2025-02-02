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

void input_bst(Node* &root, int val){
    if(root == NULL){
        root = new Node(val);
    }
    if(root->val > val){
        if(root->left == NULL){
            root->left = new Node(val);
        }else{
            input_bst(root->left,val);
        }
    }else{
        if(root->right == NULL){
            root->right = new Node(val);
        }else{
            input_bst(root->right,val);
        }
    }
}

bool search(Node* root,int val){
    if(root == NULL) return false;
    if(root->val == val) return true;
    if(root->val > val){
        return search(root->left,val);
    }else{
        return search(root->right,val);
    }
}

Node* convert(vector<int> v,int l, int r){
    if(l>r) return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(v[mid]);
    Node* leftroot = convert(v,l,mid-1);
    Node* rightroot = convert(v,mid+1,r);
    root->left = leftroot;
    root->right = rightroot;
    return root;
}

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        cout << v[i] <<" ";
    }
    Node* root = convert(v,0,n-1);
    cout << endl;
    level_order(root);
    return 0;
}