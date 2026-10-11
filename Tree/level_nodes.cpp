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

void print_level(Node* root,int target_level){
    if(root==NULL)
        return;
    
    queue<pair<Node*,int>> q;
    q.push({root,0});
    bool flag=0;

    while(!q.empty()){
        Node* current=q.front().first;
        int level=q.front().second;
        q.pop();

        if(level==target_level){
            cout<<current->val<<" ";
            flag=1;
        }
        if(level>target_level)
        break;
    if(current->left)
    q.push({current->left,level+1});
if(current->right)
q.push({current->right,level+1});    
}
if(flag==0){
    cout<<"Invalid";
    cout<<endl;
}
}

int main(){
Node* root=input_tree();
int level; cin>>level;
print_level(root,level);



    return 0;
}
