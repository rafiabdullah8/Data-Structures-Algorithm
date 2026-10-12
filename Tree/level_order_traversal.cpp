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

Node* q[1000];
int lvl[1000];
int front = 0, rear = 0;

void push(Node* n, int l) {
    q[rear] = n;
    lvl[rear] = l;
    rear++;
}

void pop() {
    front++;
}

bool empty() {
    return front == rear;
}



    void level_order(Node* root){
        if(root==NULL){
            cout<<"No Tree"<<endl;
            return;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* f=q.front();
            q.pop();
            cout<<f->val<<endl;

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }

int main(){
Node* root=new Node(10);
Node* a=new Node(20);
Node* b=new Node(30);
Node* c=new Node(40);
Node* d=new Node(50);
Node* e=new Node(60);

root->left=a;
root->right=b;
a->left=c;
a->right=d;
b->left=e;

level_order(root);
    return 0;
}
