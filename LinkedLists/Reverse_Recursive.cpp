#include<iostream>
using namespace std;

class Linked_list{
    struct Node{
        int data;
        Node *next;

        Node(int d) : data(d), next(NULL) {} // Use member initializer list
    };

    Node* head;
    int max_size; // Include max_size as a member variable

public:
    Linked_list() : head(NULL), max_size(0) {} // Initialize head and max_size

    void insertEnd(int item){
        Node *newnode = new Node(item);
        if(head == NULL){
            head = newnode;
        }
        else{
            Node *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
        max_size++;
        cout << "Inserted : " << newnode->data << endl;
    }

    // Recursive reverse helper function
    Node* reverseUtil(Node* curr, Node* prev){
        if(curr == NULL) return prev;
        Node* next = curr->next;
        curr->next = prev;
        return reverseUtil(next, curr);
    }

    // Function to reverse the linked list
    void reverse(){
        head = reverseUtil(head, NULL);
    }

    void display(){
        if(head ==NULL){
            cout << "\nEmpty\n";
        } else {
            Node *current = head;
            while(current != NULL){
                cout << current->data << " -> ";
                current = current->next;
            }
            cout << "NULL\n";
        }
        cout << "Size of linked list: " << max_size << endl; // Display size
    }
};

int main(){
    Linked_list li;

    li.insertEnd(10);
    li.insertEnd(11);
    li.insertEnd(12);

    cout << "\nBefore Reverse\n";
    li.display();

    li.reverse();

    cout << "\nAfter Reverse\n";
    li.display();

    return 0;
}