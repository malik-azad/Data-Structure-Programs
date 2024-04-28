#include<iostream>
using namespace std;

//Node class

class Node
{
public:
    int data;
    Node * next;
    Node * prev;
    Node(int data)
    {

        this -> data = data;
        next = NULL;
        prev = NULL;
    }
};

// Linked list class
class dblyLinkedList
{
public:
    Node * head;
    dblyLinkedList()
    {
        head = NULL;
    }

//Insertion at an arbitrary position
    void insertAtPos(int data,int pos)
    {
        Node * newNode = new Node(data);

        // when list is empty
        if(head == NULL) head= newNode;

        //insert at begining of existing list
        else if(pos==1)
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        //handle other cases of insertion at end or between two nodes
        else
        {


            int count  = 1;
            Node * curr = head;
            while(count!=pos && curr->next != NULL)
            {
                curr = curr->next;
                count++;
            }


            if(count<pos)
            {
                newNode->prev = curr;
                curr->next = newNode;
            }
            else
            {
                newNode->prev = curr->prev;
                curr->prev->next = newNode;
                newNode->next = curr;
                curr->prev = newNode;
            }

        }
    }

 int delete(int data)
 {
     // write deletion code here
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
    dblyLinkedList list1;


    list1.traverse();


    list1.insertAtPos(20,2);


    list1.traverse();

    list1.insertAtPos(40,1);
    list1.traverse();
    list1.insertAtPos(30,2);
    list1.traverse();

    list1.insertAtPos(30,4);
    list1.traverse();

    return 0;
}
