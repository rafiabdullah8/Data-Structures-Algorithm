#include<bits/stdc++.h>
using namespace std;

//defining a public class to access for all functions.
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* input_tree(){
int val;
cin>>val;
Node* root=new Node(val);

queue<Node*>q;
q.push(root);

while(!q.empty()){
    Node* p=q.front();
    q.pop();
    int l,r;
    cin>>l>>r;
    Node* myLeft;Node* myRight;
  if(l==-1)myLeft=NULL;
  else myLeft=new Node(l);
  if(r==-1)myRight=NULL;
  else myRight=new Node(r);
  
  p->left=myLeft;
  p->right=myRight;

  if(p->left) 
  q.push(p->left);
  if(p->right) 
  q.push(p->right);
}
return root;
}

int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0; 
    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}

//function to count nodes
int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l + r + 1;
}

//main function
int main(){
Node* root=input_tree();
 int mx_dep = max_height(root);
    int total_Nodes = count_nodes(root);
    int cal = pow(2, mx_dep + 1) - 1;
    if(total_Nodes==cal){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   
    return 0;
}
