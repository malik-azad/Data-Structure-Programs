#include<iostream>
using namespace std;
    int max_size =0; 
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
        head = newnode;
        max_size++;
        }
    else{
        Node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        max_size++;
        temp->next = newnode;
        
    } 
    
    cout<<"Inserted : "<<newnode->data<<endl;
}

//function to Delete at Begining of Linked list
void DeleteBeg(){
    Node *temp = head;
    head = temp->next;
    cout<<"\n Deleted: "<<temp->data<<endl;
    delete(temp);

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
        max_size++;
    }
}
    
};

int main(){

    Linked_list li = Linked_list();


    li.insertEnd(10);
    li.insertEnd(12);
    li.insertEnd(12);
    cout<<"\n  SIZE OF LINKED LIST BEFORE : "<<max_size<<endl;
    cout<<"\n Before Delete\n";
    
    li.display();
    
    
    li.DeleteBeg();

    cout<<"\n After Delete\n"; 
    li.display();

    return 0;
}