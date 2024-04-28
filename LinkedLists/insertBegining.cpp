#include<iostream>
using namespace std;

class Node{
    public:
        int data;
         Node *next;
};

class Linked_list{
        private:
            Node *head;
        public:
          Linked_list(){
            head = nullptr;
          }
  void insertBeg(int);
  void display();

     
};
//method to insert at begining of linked list
void Linked_list:: insertBeg(int data){
            Node *newnode = new Node();
            newnode->data = data;
            newnode->next = head;
            head = newnode;
            cout<<"Inserted: "<<newnode->data<<endl;
        }
//this method is used to display elements of linke list 
void Linked_list:: display(){
        Node *temp = head;
        while(temp !=nullptr){
            cout<<temp->data <<"->";
            temp = temp->next;
        }

        cout<<"NULL";

    }

int main(){
    //creating list mylilst
    Linked_list mylist ;
     
     //inserting two nodes in linked list
     mylist.insertBeg(4);
     mylist.insertBeg(3);
    
    //used to display linked list 
     mylist.display();

     return 0;
}