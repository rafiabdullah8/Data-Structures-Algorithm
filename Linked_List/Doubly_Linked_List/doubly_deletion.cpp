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

void delete_any_pos(Node* head, int idx) {
    Node* tmp = head;

    for (int i = 1; i < idx; i++) {
        tmp = tmp->next;
    }

    Node* deletenode = tmp->next;

    tmp->next = tmp->next->next;

    if (tmp->next != NULL) {
        tmp->next->prev = tmp;
    }

    delete deletenode;
}

void delete_head(Node* &head, Node* &tail) {

    Node* deletenode = head;

    head = head->next;

    delete deletenode;

    if (head == NULL) {
        tail = NULL;
        return;
    }

    head->prev = NULL;
}

void delete_tail(Node* &head, Node* &tail) {

    Node* deletetail = tail;

    tail = tail->prev;

    delete deletetail;

    if (tail == NULL) {
        head = NULL;
        return;
    }

    tail->next = NULL;
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

    delete_head(head, tail);

    delete_any_pos(head, 1);

    delete_tail(head, tail);

    print_forward(head);

    return 0;
}
