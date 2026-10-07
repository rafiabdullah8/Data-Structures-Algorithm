#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

//insert at head
void insert_head(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);

    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

//insert at tail
void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);

    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

//insert at any position
void insert_any_pos(Node* head, int idx, int val) {
    Node* newnode = new Node(val);
    Node* tmp = head;

    for (int i = 1; i < idx; i++) {
        tmp = tmp->next;
    }

    newnode->next = tmp->next;
    newnode->prev = tmp;

    if (tmp->next != NULL) {
        tmp->next->prev = newnode;
    }

    tmp->next = newnode;
}

void print_forward(Node* head) {
    Node* tmp = head;

    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

int main() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    insert_head(head, tail, 100);
    insert_tail(head, tail, 200);
    insert_any_pos(head, 2, 150);

    print_forward(head);

    return 0;
}
