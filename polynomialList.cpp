#include<iostream>

using namespace std;

class Node
{
private:
    int power;
    int coeff;


public:
Node *next;

    Node(int p, int c)
    {
        power = p;
        coeff = c;
        next = NULL;
    }

void setPower(int p)
{
    power = p;

}
void setCoefficient(int c)
{
    coeff = c;

}

int getPower()
{
    return power;

}

int getCoefficient()
{
    return coeff;

}


};

class Polynomial
{
private:

Node *head;
Node *tail;

public:
Node * getHead()
{
return head;
}
Polynomial()
{
    head  = NULL;
    tail = NULL;
}

Polynomial* polynomialMultiplication(Polynomial * poly2)
{
    Node *p1, *p2;
    Polynomial * p3= new Polynomial();

    p1 = this->head;

    while(p1!=NULL)
    {
        p2 = poly2->getHead();

        while(p2!=NULL)
        {

          p3->append(p1->getCoefficient() * p2->getCoefficient(), p1->getPower() + p2->getPower());

          p2= p2->next;
        }
        p1= p1->next;
    }
return p3;
}

void removeLikeTerms()
{
    Node* current = head;
    Node * temp=NULL;

    while(current->next !=NULL)
    {
        if(current->getPower() == current->next->getPower())
        {
            current->setCoefficient(current->getCoefficient() + current->next->getCoefficient());
            // hold the address of  the second term from the pair of like terms
            temp = current->next;
            // skip/break link of the second term from the pair of like terms
            current->next = current->next->next;
            // delete the second term from the pair of like terms
            delete temp;


        }
        else
        current = current->next;

    }


}

Polynomial* polynomialAdd(Polynomial * poly2)
{
    Node *p1, *p2;
    Polynomial * p3= new Polynomial();

    p1 = this->head;
    p2 = poly2->getHead();

    while(p1!= NULL && p2!=NULL)
    {
        if(p1->getPower() > p2->getPower())
        {
            p3->append(p1->getCoefficient(), p1->getPower());

            p1= p1->next;
        }
        else if(p1->getPower() < p2->getPower())
        {
            p3->append(p2->getCoefficient(), p2->getPower());

            p2= p2->next;
        }
        else
        {
            p3->append(p1->getCoefficient() + p2->getCoefficient(), p2->getPower());

            p1= p1->next;
            p2= p2->next;
        }



    }

    while(p1!= NULL)

    {
         p3->append(p1->getCoefficient(), p1->getPower());

            p1= p1->next;
    }

     while(p2!= NULL)

    {
         p3->append(p2->getCoefficient(), p2->getPower());

            p2= p2->next;
    }


    return p3;
}

void append(int c, int p)
{
    Node *temp = new Node(p,c);


if(tail == NULL)
    tail = head = temp;
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

void printPolynomial()
{
    Node *ptr = head;
    while(ptr !=NULL)
    {
        cout<<ptr->getCoefficient()<<"X"<<"^"<<ptr->getPower()<<"+";

        ptr = ptr->next;
    }
}

};


int main()
{
Polynomial *poly1 = new Polynomial;

poly1->append(3, 3);
poly1->append(4, 2);
poly1->append(5, 0);

poly1->printPolynomial();

cout<<endl;
Polynomial *poly2 = new Polynomial;
poly2->append(3, 3);
poly2->append(2, 2);


poly2->printPolynomial();
cout<<endl;


Polynomial *poly3 = new Polynomial;

poly3 = poly1->polynomialAdd(poly2);

poly3->printPolynomial();

cout<<endl;
cout<<endl;


Polynomial *poly4 = new Polynomial;

poly4 = poly1->polynomialMultiplication(poly2);

poly4->printPolynomial();
/*
poly4->removeLikeTerms();

cout<<endl;
cout<<endl;

poly4->printPolynomial();

*/
return 0;

}
