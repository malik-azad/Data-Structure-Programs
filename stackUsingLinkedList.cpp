// stack implementation using Linked list in c++

#include<iostream>
#include<conio.h>
using namespace std;

class Node
{
public:

    int data;
    Node * next;
    Node(int val)
    {
        data= val;
        next = NULL;
    }
};
class Stack
{
protected:
    Node *top; // top to point to top node of the stack
    int numItems;
public:

    Stack()
    {
        top = NULL;
        numItems = 0;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    void display();
    void cleanStack();
    int size();
};

bool Stack::push(int x)
{
    Node *temp = new Node(x);

    if(temp == NULL)
    {
        cout<<"can not create the object \n";
        return false;
    }
    if (top == NULL)
    {

        top  = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
    numItems++;
    return true;
}

int Stack::pop()
{
    if (top == NULL)
    {
        cout << "Stack Underflow\n";
        return -999999;
    }
    else
    {
        Node *temp = top;
        top = top->next;

        numItems--;

        int x = temp->data;

        temp->next = NULL;
        delete temp;


        return x;
    }
}
int Stack::peek()
{
    if (top == NULL)
    {
        cout << "Stack is Empty";
        return -99999;
    }
    else
    {
        int x = top->data;
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top == NULL);
}
void Stack::display()
{
    Node *current = top;
//print all elements in stack :
    cout<<"Elements present in stack : ";
    while(current !=   NULL)
    {
        cout<<current->data <<" ";   // print top element in stack
        current = current->next;

    }
    cout<<endl;
}
void Stack::cleanStack()
{
    while(!isEmpty())
    {
        // remove top element in stack
        pop();

    }

}

int Stack::size()
{
    return (numItems);
}

// Program to test above functions
int main()
{
    class Stack s;
    int ch, val;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Peek stack"<<endl;
    cout<<"4) Diplay  stack"<<endl;
    cout<<"5)  Pop/Clean stack"<<endl;
    cout<<"6)  return size of stack"<<endl;

    cout<<"7) Exit"<<endl;
    do
    {
        cout<<"Enter choice: "<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
        {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            s.push(val);
            break;
        }
        case 2:
        {
            cout << s.pop() << " Popped from stack\n";
            break;
        }
        case 3:
        {
            cout << "Top element is : " << s.peek() << endl;
            break;
        }
        case 4:
        {
            s.display();
            break;
        }
        case 5:
        {
            s.cleanStack();
            break;
        }
        case 6:
        {
            cout<<"size of stack is "<<s.size()<<endl;

            break;
        }
        case 7:
        {
            cout<<"Exit"<<endl;
            break;
        }

        default:
        {
            cout<<"Invalid Choice"<<endl;
        }
        }
    }
    while(ch!=7);
    getch();
    return 0;
}


