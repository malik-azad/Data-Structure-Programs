#include<iostream>
using namespace std;

//structure of linked list
struct Node{
    int data;
    Node *next;

    //creaing constructure
    Node(int item=0){
        data = item;
        next =NULL;
    }
};

//driver program
int main(){
    Node *head = new Node(10);
    head->next= new Node(20);
    head->next->next = new Node(30);
   
   //printing elemments of linked list
   while(head != NULL){
    cout<<head->data<<" ";
    head = head->next;
   }

}