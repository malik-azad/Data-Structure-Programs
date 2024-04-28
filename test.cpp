#include <iostream>

using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Queue class
class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() {
        front = rear = NULL;
    }

    // Enqueue operation
    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (front == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << "Enqueued: " << value << endl;
    }

    // Dequeue operation
    int dequeue() {
        if (front == NULL) {
            cout << "Queue is empty!" << endl;
            return -1;
        }

        int value = front->data;
        Node* temp = front;
        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }

        delete temp;
        return value;
    }

    // Insert operation
    void insert(int value, int position) {
        Node* newNode = new Node;
        newNode->data = value;

        if (position == 0) {
            newNode->next = front;
            front = newNode;
            if (rear == NULL) {
                rear = newNode;
            }
        } else {
            Node* temp = front;
            for (int i = 0; i < position - 1; i++) {
                if (temp->next == NULL) {
                    cout << "Position out of range!" << endl;
                    return;
                }
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            if (newNode->next == NULL) {
                rear = newNode;
            }
        }
    }

    // Display queue
    void display() {
        Node* temp = front;
        while (temp!= NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display(); // Output: 10 20 30 40 50

    q.insert(25, 2); // Insert 25 at position 2

    q.display(); // Output: 10 20 25 30 40 50

    cout << "Dequeued: " << q.dequeue() << endl; // Output: 10
    cout << "Dequeued: " << q.dequeue() << endl; // Output: 20

    q.display(); // Output: 25 30 40 50

    return 0;
}