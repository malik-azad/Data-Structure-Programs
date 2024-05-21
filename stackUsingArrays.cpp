// stack implementation using array in c++
#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

#define MAX 5
class Stack
{
protected:
    int top;
    int a[MAX]; // MAX is size of Stack

public:

    Stack()
    {
        top = -1;
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
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow\n";
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow\n";
        return -999999;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0)
    {
        cout << "Stack is Empty";
        return -99999;
    }
    else
    {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}
void Stack::display()
{
//print all elements in stack :
    cout<<"Elements present in stack : ";
    for(int i= top;i>=0;i--)
    {
        // print top element in stack
        cout<<a[i]<<" ";

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
    return (top +1);
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

