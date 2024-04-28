#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};
class Queue{
    Node *front, *rear;
    public:
        Queue(){
            front=rear=NULL;
        }
    void enqueue(int);
    void dequeue();
    void display();
};

void Queue::enqueue(int item){
    Node *newNode;
    newNode= new Node;
    newNode->data = item;
    newNode->next = NULL;
    
    if(front==NULL){
        front=rear=newNode;
        cout<<"Element Inserted: "<<newNode->data<<endl;
    }
    else{
        rear->next =newNode;
        rear = newNode;
        cout<<"Element Inserted: "<<newNode->data<<endl;
    }
}

void Queue::dequeue(){
     Node *temp;
    if(front==NULL){
        cout<<"Queue is Empty";
    }
    else{
        
        temp = front;
        front = front->next;
        cout<<"Deleted Element is : "<<temp->data<<endl;
        delete(temp); 
    } }

void Queue::display(){
    Node *temp;
    temp = front;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main(){
    Queue q1;
    q1.enqueue(5);
    q1.enqueue(6);
    q1.enqueue(7);
    q1.dequeue();
    q1.enqueue(4);
    q1.enqueue(2);
    q1.display();
    return 0;
}