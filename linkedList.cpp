
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data) {
        this->data=data;
        next=NULL;
    }
};
class linkedList{
public:
    Node* head;
    Node*temp;
    linkedList(){
        head=NULL;
    }

    //insertion operation
    void insert(int data){

        Node* newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;

        }
        else
        {
            Node* temp=head;

        while(temp->next!=NULL){
                temp=temp->next;

        }
        temp->next=newnode;

        }
    }
    void display(){
        cout<<"\nLinked list data:";
        if(head==NULL)
        {
            cout<<"list is empty\n";
        }
        else{
            Node* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<" \t";
                temp=temp->next;
            }

        }
    }

    void deleteItem(int data)
    {
        cout<<"\ndeleting item :"<<data<<"\n";
        if(head==NULL){
            cout<<"list is empty";
        }
        //deleting ist node of list
       if(head->data==data)
       {
           Node*temp=head;
           head=head->next;
           delete temp;

       }
       //delete at any orbitary position
       Node* prev=head;
       Node* curr=head->next;
       while(curr!=NULL &&curr->data!=data)
       {
           prev=curr;
           curr=curr->next;
       }
       if(curr!=NULL)
       {
           prev->next=curr->next;
           delete curr;

       }
    }
};

int main(){
    linkedList list1;
    list1.display();
    list1.insert(10);
    list1.insert(20);
    list1.insert(30);
    list1.insert(40);

list1.display();
list1.deleteItem(20);
list1.display();
list1.insert(50);
list1.insert(60);
list1.insert(70);
list1.deleteItem(10);
list1.display();


    return 0;
}

