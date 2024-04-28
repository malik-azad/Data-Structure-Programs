#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(NULL) {}
};

class CircularQueue {
    Node* front;
    Node* rear;

public:
    CircularQueue() : front(NULL), rear(NULL) {}

    void enqueue(int data) {
        Node* newNode = new Node(data);

        if (front == NULL) {
            front = rear = newNode;
            rear->next = front;
        } else {
            rear->next = newNode;
            rear = newNode;
            rear->next = front;
        }
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty." << endl;
        } else if (front == rear) {
            Node* temp = front;
            front = rear = NULL;
            delete temp;
        } else {
            Node* temp = front;
            front = front->next;
            rear->next = front;
            delete temp;
        }
    }

    void display() {
        if (front == NULL) {
            cout << "Queue is empty." << endl;
        } else {
            Node* temp = front;
            cout << "Circular Queue: ";
            do {
                cout << temp->data << " ";
                temp = temp->next;
            } while (temp!= front);
            cout << endl;
        }
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();

    q.dequeue();
    q.dequeue();
    q.display();

    q.enqueue(50);
    q.enqueue(60);
    q.display();

    return 0;
}