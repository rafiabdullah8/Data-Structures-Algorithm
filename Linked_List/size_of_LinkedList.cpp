// Create a singly linked list and print the size of the linked list.

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void print(Node* &head,int count){
    Node* tmp=head;

    while(tmp!=NULL){
        tmp=tmp->next;
        count++;
    }
    cout<<count;
}

int main(){
    //value: 2 1 5 3 4 8 9
Node* head=new Node(2);
Node* a=new Node(1);
Node* b=new Node(5);
Node* c=new Node(3);
Node* d=new Node(4);
Node* e=new Node(8);
Node* f=new Node(9);

head->next=a;
a->next=b;
b->next=c;
c->next=d;
d->next=e;
e->next=f;

print(head,0);
    return 0;
}
