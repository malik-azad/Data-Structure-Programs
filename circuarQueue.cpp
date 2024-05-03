#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class CircularQ{
    Node *front,*rear;
    public:
    CircularQ(){
        front=rear=NULL;
    }
   void enqueue(int);
   void dequeue();
   void display();

};

void CircularQ::enqueue(int item){
    Node *newNode = new Node();
    newNode->data = item;
    newNode->next= NULL;


    if(front==NULL){
        front=rear=newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
    
}

void CircularQ::dequeue(){
    if(front==NULL){
        cout<<"Queue is empty"<<endl;
    }else if(front==rear){
        Node *temp = front;
        front = rear = NULL;
        delete (temp);
    }else{
        Node *temp = front;
        front = front->next;
        rear->next = front;
        delete(temp);
    }
}

void CircularQ :: display(){
    if(front==NULL){
        cout<<"Queue is empty"<<endl;
    }else{
        Node *temp = front;
            do{
                cout<<temp->data<<" ";
                temp = temp->next;
            }while(temp!=front);
            cout<<endl;
}
}
int main(){
     CircularQ q1;
    
     q1.enqueue(07);
     q1.enqueue(17);
     q1.enqueue(22);
     cout<<" Circular Queue elements are: "<<endl;
     q1.display();
     q1.dequeue();
     cout<<" Circular Queue after Dequeue Operation: "<<endl;
     q1.display();
 return 0;
}
