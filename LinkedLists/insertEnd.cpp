#include<iostream>
using namespace std;



//creaing structre of linked lis using class
class Node{
    public:
    int data;
    Node *next;
};

//-------Insertation function method 2 --- other waay ----
void insertEnd(Node **head, int item){
        Node *newnode = new Node();
        newnode->data = item;
        newnode->next=NULL;

        if(*head==NULL){
            *head = newnode;
            cout<<"Inserted : "<<newnode->data<<endl;
            return;
        }

        Node *temp = *head;
        while(temp->next != NULL)
            temp = temp->next;
        
        
        temp->next= newnode;
        cout<<"Inserted : "<<newnode->data;
}

void display(Node *head){
    while(head !=NULL){
        cout<<head->data<<" -> ";
        head = head ->next;
    }
    cout<<"NULL";
}

int main(){

    //creating first node 
    Node *head = NULL;
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    cout<<endl;

    //pasing first node to function 
    display(head);
    return 0;


}