#include<iostream>
using namespace std;


//Defining Class 6-19
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    
    
 //Creating Constructor   14-18
    Node(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};

//Level order traversal 23-40
void level_order(Node* root){
    if(root==NULL){
        cout<<"No Tree";
        return;
    }
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
    Node* f=q.front();
    q.pop();
    cout<<f->val<<endl;

    if(f->left)
    q.push(f->left);
    if(f->right)
    q.push(f->right);
   } 
}


//preorder traversal 44-50
void preorder(Node* root){
    if(root==NULL)
    return;
    cout<<root->val<<endl;
    preorder(root->left);
    preorder(root->right);
}

//inorder traversal 53-59
void inorder(Node* root){
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->val<<endl;
    inorder(root->right);   
}

//postorder traversal 62-68
void postorder(Node* root){
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<endl;   
}

Node* input_tree(){
    int val;
    cin>>val;
    if(val==-1) return ;
    Node* root=new Node(val);
    
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* x=q.front();
        q.pop();
     int l,r;
     cin>>l>>r;
     Node* myLeft; Node* myRight;
     if(l==-1) myLeft=NULL;
     else myLeft=new Node(l);
     if(r==-1) myRight=NULL;
     else myRight=new Node(r);
    x->left=myLeft;
    x->right=myRight;

    if(x->left) q.push(x->left);
    if(x->right) q.push(x->right);

    }

}

int main(){
    Node* root=input_tree();
    level_order(root);
}



