//Here i am using Floyds Cycle finding algorithm

#include<iostream>
using namespace std;

struct  Node{
        int val;
        Node *next;

        Node(int x):val(x),next(nullptr){}
};

//append function 
void append(Node **head, int data){
        Node *newNode = new Node(data);
        if(*head==nullptr){
                *head = newNode;
                return;
        }

        Node *last = *head;
        while(last->next != nullptr){
                last = last->next;
        }

        last->next= newNode;
}

bool hasloop(Node *head){
        Node *slow_ptr = head;
        Node *fast_ptr = head;


        while(slow_ptr&&fast_ptr&&fast_ptr->next){
                slow_ptr = slow_ptr->next;
                fast_ptr = fast_ptr->next->next;


                if(slow_ptr == fast_ptr){
                        return true;
                         cout<<"loop";
                }

        }
              cout<<"no loop";
                return false;
        
}

int main(){
    
    Node *head = new Node(1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);

//creating loop 
  head->next->next->next->next->next = head->next->next;

    if(hasloop(head)){
        cout<<"\nLoop found"<<endl;
    }else{
       cout<<"\nLoop Not found"<<endl;

    }
       return 0;
}




