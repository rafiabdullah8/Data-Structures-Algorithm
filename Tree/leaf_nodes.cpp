#include<iostream>
using namespace std;
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

  if(p->left) q.push(p->left);
  if(p->right) q.push(p->right);
}
return root;
}

void leaf_nodes(Node* root,vector<int>& leafes){
    if(!root) 
    return;
leaf_nodes(root->left,leafes);
leaf_nodes(root->right,leafes);


if(root->left==NULL && root->right==NULL){
    leafes.push_back(root->val);
}
}
int main(){
Node* root=input_tree();
vector<int>leaf_value;

leaf_nodes(root,leaf_value);
sort(leaf_value.begin(),leaf_value.end());
reverse(leaf_value.begin(),leaf_value.end());
for(int val: leaf_value){
    cout<<val<<" ";
}

    return 0;
}

