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
        cout<<"Inserted : "<<newnode->data<<endl;
}


//function to merge two linked lists
 Node *merge(Node* &head1, Node* &head2){
      if(head1==NULL){
        return head2;
      }

      if(head2==NULL){
        return head1;
      }

    Node* result;
    if(head1->data < head2->data){
        result = head1;
        result->next = merge(head1->next, head2);
    }else{
        result = head2;
        result->next = merge(head1, head2->next);
    }
    
    return result;
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
    Node *head1 = NULL;
    insertEnd(&head1, 20);
    insertEnd(&head1, 30);
    insertEnd(&head1, 40);

    

    //pasing first node to function 
    cout<<"\nLinked list 1:\n";
    display(head1);
   cout<<endl;

   Node *head2 = NULL;
    insertEnd(&head2, 50);
    insertEnd(&head2, 60);
    insertEnd(&head2, 70);

     cout<<"\nLinked list 2:\n";
    display(head2);

    Node *newnode = merge(head1, head2);
     cout<<"\nMerged linked list 2:\n";
    display(newnode);
    return 0;


}