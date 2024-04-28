#include<iostream>
using namespace std;

class Linked_list{
    struct Node{
       int data;
       Node *next;
    

    Node(int d){
        data = d;
        next = NULL;
    }
    };

    Node* head;

    public:
        Linked_list(){
            head = NULL;
        }


void insertEnd(int item){
    Node *newnode = new Node(item);
    if(head == NULL){
        newnode->next = head;
        head = newnode;}
    else{
        Node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        
        temp->next = newnode;
        
    } cout<<"Inserted : "<<newnode->data<<endl;
}


void display(){
    if(head==NULL){
        cout<<"\nEmpty\n";
    }else{
        Node *current = head;
        while(current!=NULL){
            cout<<current->data<<" -> ";
            current = current->next;
        }

        cout<<"NULL\n";
    }
}
    
};

int main(){

    Linked_list li = Linked_list();

    li.insertEnd(10);
    li.insertEnd(100);
    

    li.display();

    return 0;
}