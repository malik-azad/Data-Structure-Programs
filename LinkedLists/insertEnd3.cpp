#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node *next;

};

void insertEnd(Node **head, int data){
    Node *newnode = new Node();

    newnode->data = data;
    newnode->next = nullptr;


    if(*head == nullptr){
        *head = newnode;
        cout<<"Inserted: "<<newnode->data<<endl;
        return;
    }

    Node *current = *head;
    while(current->next != nullptr)
        current = current->next;

    current->next = newnode;
    cout<<"Inserted: "<<newnode->data<<endl;
}

//methode to display 
void display(Node *head){
    while(head!=nullptr){
        cout<<head->data <<"->";
        head = head->next;
    }

    cout<<"NULL";

}

int main(){
       
        Node *head = nullptr;

        //pass by address
        insertEnd(&head, 10);
        insertEnd(&head, 20);

        display(head);
    return 0;
}