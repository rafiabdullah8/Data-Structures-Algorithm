// Create a singly linked list and print the middle element. 
// If there are multiple values in the middle, print both.

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
    int mid=count%2;
    cout<<mid;
}
int main(){
Node* head=new Node(2);
Node* a=new Node(4);
Node* b=new Node(6);
Node* c=new Node(8);
Node* d=new Node(10);


head->next=a;
a->next=b;
b->next=c;
c->next=d;


print(head,0);
    return 0;
}
