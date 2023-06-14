#include <bits/stdc++.h>
using namespace std;
class Node {
   public:
    int val;
    Node* next;  // next mode address
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    return 0;
}