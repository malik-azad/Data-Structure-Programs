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

//function to add node at specific position 

void insertAtPostion(int pos, int item){
    Node *newnode = new Node(item);

    if(pos < 1 || pos > max_size){
        cout<<"\nIts is Not valid positon\n ";
        return ;
    }

    if(pos==1){
        newnode->next = head;
        head = newnode;
    }else{
        Node *temp  = head;
        while(--pos>1){
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;

    }
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
    //insert postion at you want to enter and enter element 
    li.insertAtPostion(2, 3);
    
    
    li.display();
    cout<<"\n MAX SIZE OF LINKED LIST : "<<max_size<<endl;

    return 0;
}