#include<iostream>
using namespace std;



//creaing structre of linked lis using class
class Node{
    public:
    int data;
    Node *next;
};

//creating linked list class
class Linked_list{
    private:
    //creating head node
        Node *head;

    public:
    Linked_list(){
        head = nullptr;
    }

    //decleration because function are delcerated outside class 
  void Inseration(int);
  void display();

};

//creating functions outside class so resolution oprator :: used 
void Linked_list:: Inseration(int item){
        Node *newnode = new Node();
        newnode->data = item;
        newnode->next = nullptr;
       
       //if will run when we insert node 
        if (head == nullptr){
            head = newnode;
            cout<<"Inserted : "<<newnode->data<<endl;
            return;
        }
     //if head is not null means some data is present we need to add next
     
    Node *current = head;
    
     while(current->next !=nullptr)
        current  = current->next;

    current->next = newnode;
    cout<<"Inserted : "<<newnode->data<<endl;
    }

//fucnction of displaying items or data 
void Linked_list:: display(){
        Node *temp = head;
        while(temp !=nullptr){
            cout<<temp->data <<"->";
            temp = temp->next;
        }

        cout<<"NULL";

    }

int main(){
    Linked_list list ; //another way " Linked_list *mylist = new Node(5); mylist->insert(3);
    list.Inseration(1);
    list.Inseration(2);
    list.Inseration(3);


    list.display();

    return 0;


}