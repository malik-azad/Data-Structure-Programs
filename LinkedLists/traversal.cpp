#include<iostream>
using namespace std;
//creaing class 
class Node{
    public:
        int data;
        Node *next;
};

int main(){

    //creating three nodes 
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    

    head = new Node();
    second = new Node();
    third = new Node();

//assign data items and next to each node last node next is NULL
    head->data=1;
    head->next = second;

    second->data=2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    
//traversing above nodes 
while(head!= NULL){
    cout<<head->data<<"->";
    head = head ->next;
}
cout<<"NULL";

    return 0;
}