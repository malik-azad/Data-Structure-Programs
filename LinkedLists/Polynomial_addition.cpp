/* applicaiton of linked list polynomial
polynomial example= 3x^2+5x


add two polynomial 1. 3x^2+5x
                   2. 6x + 8
        result =    3x^2 + 11x + 8


Three things a node has :
1.Co-efficient
2.exponent
3. link to next node 

cpp progrogram to add to polynomial using linked list 
*/

#include<iostream>
using namespace std;

// Structure of polynomial node
struct Node {
    int coeff; // Holds coefficient
    int pow;  // Holds exponent or power
    Node *next;   // Address of next node

    Node(int c, int p): coeff(c), pow(p), next(nullptr) {}
};

// Function to add two polynomials
Node *addpolly(Node *first, Node *second) {
    Node *result = nullptr;
    Node *last = nullptr; // Points to last node of result

    while(first != nullptr && second != nullptr) {
        Node *temp = nullptr;

        if(first->pow > second->pow) {
            temp = new Node(first->coeff, first->pow);
            first = first->next;
        } else if(first->pow < second->pow) {
            temp = new Node(second->coeff, second->pow);
            second = second->next;
        } else {
            int sum = first->coeff + second->coeff;
            if(sum != 0)
                temp = new Node(sum, first->pow);
            first = first->next;
            second = second->next;
        }

        if(temp != nullptr) {
            if(result == nullptr)
                result = temp;
            else
                last->next = temp;
            last = temp;
        }
    }

    // Append the remaining elements of first or second polynomial
    while(first != nullptr) {
        Node *temp = new Node(first->coeff, first->pow);
        if(result == nullptr)
            result = temp;
        else
            last->next = temp;
        last = temp;
        first = first->next;
    }

    while(second != nullptr) {
        Node *temp = new Node(second->coeff, second->pow);
        if(result == nullptr)
            result = temp;
        else
            last->next = temp;
        last = temp;
        second = second->next;
    }

    return result;
}

// Function to display the polynomial
void display(Node *head) {
    while(head != nullptr) {
        cout << head->coeff << "x^" << head->pow;
        if(head->next != nullptr) cout << " + ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node *poly1 = new Node(3, 2);
    poly1->next = new Node(5, 1);

    Node *poly2 = new Node(6, 1);
    poly2->next = new Node(8, 0);

    Node *result = addpolly(poly1, poly2);

    cout << "Result: ";
    display(result);
}
