#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;     
};

void insertBeg(Node **head, int data){
        Node *newnode = new Node();
        newnode->data = data;
        newnode->next = *head;
        *head = newnode;
        cout<<"Inserted: "<<newnode->data<<endl;
}


void display(Node *head){
    while(head !=NULL){
        cout<<head->data<<" -> ";
        head = head ->next;
    }
    cout<<"NULL";
}


int main(){
    Node *head = NULL;
    insertBeg(&head, 10);
    insertBeg(&head, 11);
    insertBeg(&head, 12);

    display(head);
   return 0;
}