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
        Node *p1 = head1;
        Node *p2 = head2;
        Node *demyNode = new Node();
        Node *p3 = demyNode;

        while(p1!=NULL && p2!=NULL){
            if(p1->data < p2->data){
                p3->next = p1;
                p1 = p1->next;
            }else{
                p3->next = p2;
                p2 = p2->next;
            }

            p3 = p3->next;

        }

        while(p1 !=NULL){
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }


        while(p2 !=NULL){
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }

        return demyNode->next;
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