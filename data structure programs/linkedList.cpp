#include<iostream>
using namespace std;

//Node class

class Node
{
public:
    int data;
    Node * next;
    Node(int data)
    {

        this -> data = data;
        next = NULL;
    }
};

// Linked list class
class LinkedList
{
public:
    Node * head;
    LinkedList()
    {
        head = NULL;
    }

//Insertion at the end
    void insert(int data)
    {
        Node * newNode = new Node(data);
        if(head == NULL) head= newNode;
        else{
        Node * temp = head;
        while(temp->next != NULL) temp = temp->next;

        temp->next  = newNode;
        }
    }



  //Deletion by value
  int remove(int data)
  {
      //list is empty
      if(head == NULL)
      return -1;

    //first node is the deletion node
      if(head->data == data){
      Node * temp = head;

      head = head->next;

      delete temp;
      return 0;
      }

      Node *prev = head;
      Node *curr = head->next;
      while(curr !=NULL && curr->data != data)
      {
          prev = curr;
          curr = curr->next;
      }

      // deletion node is any node but first node
      if(curr != NULL)
      {
          prev->next = curr->next;
          delete curr;
          return 0;
      }


      // item not found
      return 1;
  }

  //display each node of the list
  void traverse()
  {
      Node * temp = head;
      cout<<"\n the list elements are \n";
      while(temp != NULL)
      {
          cout<<temp->data<<endl;
          temp = temp->next;
      }
  }
};



int main()
{
    LinkedList list1;

    cout<<list1.remove(20);

    list1.traverse();

    list1.insert(20);

    list1.traverse();

    list1.insert(40);
    list1.insert(30);

    list1.traverse();

cout<<list1.remove(20);



list1.traverse();

cout<<list1.remove(80);
    return 0;
}
