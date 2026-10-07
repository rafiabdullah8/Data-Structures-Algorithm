 #include<iostream>
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
 int main(){
 Node* head=new Node(10);
 Node* a=new Node(20);
 Node* b=new Node(30);
 Node* c=new Node(40);        //assigning value

 //linking the nodes:
  head->next=a;
  a->next=b;
  b->next=c;

  //printing the nodes using a loop

  Node* tmp=head;
  while(tmp!=NULL){
     cout<<tmp->val<<endl;
     tmp=tmp->next;
  }

//  //if I want to re-print the linked list, I need to reassign tmp again.
  tmp=head;
  while(tmp!=NULL){
     cout<<tmp->val<<endl;
     tmp=tmp->next;
  }     return 0;
}


