//Here you will find three types of Insertion in a singly linked List.
//1. Insert at head
//2. Insert at tail
//3. Insert at any position

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_head(Node* &head,int val){                 //insert at head function
    Node* newnode=new Node(val);
    newnode->next=head;
    head=newnode;
}
void insert_any_pos(Node* &head,int idx,int val){      //insert at any position function
    Node* newnode=new Node(val);
    Node* tmp=head;
    for(int i=1;i<idx;i++){
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}

void insert_tail(Node* &head,Node* &tail,int val){      //insert at tail function
    Node* newnode=new Node(val);
    Node* tmp=head;
    if(tmp==NULL){
        head=newnode;
        tail=newnode;
    } 
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
        tmp->next=newnode;
        tail=newnode;    

}
void print(Node* &head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
}
int main(){
Node* head=new Node(10);
Node* a=new Node(20);
Node* b=new Node(30);
Node* tail=new Node(40);
head->next=a;
a->next=b;
b->next=tail;

insert_head(head,100);
insert_any_pos(head,3,500);
insert_tail(head,tail,500);
print(head);
    return 0;
}
