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

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty()){  
        Node *p = q.front();
        q.pop(); 
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void traverse_right(Node *root)
{
    if (root != NULL)
    {
        cout << root->val << endl;
    }

    while (root != NULL)
    {
        if (root->right)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
        cout << root->val << endl;
    }
}
void traverse_left(Node *root)
{
    if (root != NULL)
    {
        cout << root->val << endl;
    }

    while (root != NULL)
    {
        if (root->left)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
        cout << root->val << endl;
    }
}

int main()
{
    Node *root = input_tree();
    traverse_right(root);
    traverse_left(root);
    return 0;
}

