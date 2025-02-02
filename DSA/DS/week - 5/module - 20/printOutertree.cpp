#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input()
{
    int val;
    cin >> val;
    if (val == -1)
        return NULL;
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        parent->left = myLeft;
        parent->right = myRight;

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    return root;
}

void level_order(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();
        cout << parent->val << " ";
        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
}

void leftOuterTree(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    if (root->left)
        leftOuterTree(root->left, v);
    else
        leftOuterTree(root->right, v);
    v.push_back(root->val);
}
void rightOuterTree(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    v.push_back(root->val);
    if (root->right)
        rightOuterTree(root->right, v);
    else
        rightOuterTree(root->left, v);
}

int main()
{
    Node *root = input();
    if(root == NULL) return 0;
    vector<int> v1, v2;
    if (root->left)
        leftOuterTree(root, v1);
    if (root->right)
        rightOuterTree(root, v2);
    if(root->left == NULL && root->right == NULL)
       v1.push_back(root->val);

    if (v1.size() && v2.size())
    {

        v1.insert(v1.end(), v2.begin()+1, v2.end());
    }
    else if(v1.size() == 0 && v2.size())
    {
        v1 = v2;
    }

    for (int val : v1)
    {
        cout << val << " ";
    }
    return 0;
}