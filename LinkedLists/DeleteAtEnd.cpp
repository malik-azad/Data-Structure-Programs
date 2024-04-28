#include<iostream>
using namespace std;
    int max_size =0; 
class Linked_list{
    struct Node{
       int data;
       Node *next;
    

    Node(int d){
        data = d;
        next = nullptr;
    }
    };

    Node* head;

    public:
        Linked_list(){
            head = nullptr;
        }
 

 
void insertEnd(int item){
    Node *newnode = new Node(item);
    if(head == nullptr){
        newnode->next = head;
        head = newnode;
        max_size++;
        }
    else{
        Node *temp = head;
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        max_size++;
        temp->next = newnode;
        
    } 
    
    cout<<"Inserted : "<<newnode->data<<endl;
}

//function to Delete at Begining of Linked list
void deleteEnd(){
    
    Node *temp = head;
    Node *previous ; 

    if(head==nullptr){
        cout<<"\n Linked list is Empty";
        return ;
    }

    if(temp->next==nullptr){
        cout<<temp->data <<" Deleted\n";
        head = nullptr;
        return ;
    }

    while(temp->next !=nullptr){
       previous = temp;
       temp = temp->next;
    }

    previous->next = nullptr;
    cout<<temp->data<<" Deleted \n";
    delete(temp);

}



void display(){
    if(head==nullptr){
        cout<<"\nEmpty\n";
    }else{
        Node *current = head;
        while(current!=nullptr){
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
    li.insertEnd(11);
    li.insertEnd(12);

    cout<<"\n  SIZE OF LINKED LIST BEFORE : "<<max_size<<endl;
    cout<<"\n Before Delete\n";
    
    li.display();
    
    
    li.deleteEnd();

    cout<<"\n After Delete\n"; 
    li.display();

    return 0;
}