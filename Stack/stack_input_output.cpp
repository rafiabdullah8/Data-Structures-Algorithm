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
class myStack{
    public:
    vector<int>v;
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
       return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
    }
};
class MyQueue{
    public:
Node* head=NULL;
Node* tail=NULL;
int sz=0;
void push(int val){
    sz++;
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;
}
void pop(){
    sz--;
    Node* deleteNode=head;
    if(head==NULL){
        tail=NULL;
    }
    head=head->next;
    head->prev=NULL;
    delete deleteNode;
}
int front(){
    return head->val;
}
int size(){
    return sz;
}
bool empty(){
    if(sz==0){
        return true;
    }else{
        return false;
    }
}
};
int main(){
    myStack st;
    int n;
    cout<<"No.";
    cin>>n;
    cout<<"values: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }

while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
}

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){

// stack<int>st;
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     int x;
//     cin>>x;
//     st.push(x);
// }
// while(!st.empty()){
//     cout<<st.top()<<" ";
//     st.pop();
// }
//     return 0;
// }
