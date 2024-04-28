#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node** tail, int new_data) {
   
    Node* new_node = new Node();
    new_node->data = new_data;

    
    if (*tail == nullptr) {
        new_node->next = new_node;
        *tail = new_node;
        return;
    }

    Node* last = *tail;
    while (last->next!= *tail)
        last = last->next;

    // Insert the new node at the end of the list
    new_node->next = (*tail);
    last->next = new_node;
}

void printList(Node* node) {
    if (node == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node* start = node;
    do {
        cout << node->data << " ";
        node = node->next;
    } while (node!= start);

    cout << endl;
}

int main() {
   
    Node* head = nullptr;

    // Insert nodes into the list
    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);

    printList(head);

    int new_data;
    cout << "Enter data for new node: ";
    cin >> new_data;

    // Insert the new node into the list
    insertNode(&head, new_data);

    printList(head);

    return 0;
}
