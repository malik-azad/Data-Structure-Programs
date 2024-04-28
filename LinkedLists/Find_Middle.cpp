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

Node *findMiddle(Node *head){
        Node *slow_ptr = head;
        Node *fast_ptr = head;

        while(fast_ptr!=nullptr && fast_ptr->next !=nullptr){
                slow_ptr = slow_ptr->next;
                fast_ptr = fast_ptr->next->next;
        }

        return slow_ptr;
}
 


int main(){
    

    
    Node *head = new Node(1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);
    append(&head, 5);

//creating loop 

  Node *middle = findMiddle(head);
  if(middle!=nullptr){
        cout<<"Middle Node : "<<middle->val<<endl;
  }else{
        cout<<"\nlist is empty";
  }
       return 0;
}




