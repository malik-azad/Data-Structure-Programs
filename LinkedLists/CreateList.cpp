#include<iostream>
using namespace std;

//creating a list using structure
struct list{
    int n;
    int *p;
};

int main(){
    //creating list items
    struct list item0, item1,item2;

    //last node 
    item2.n=3;
    item2.p = NULL;

    //last -1 node
    item1.n =2;
    item1.p= &item2.n;

    //first node 
    item0.n=1;
    item0.p=&item1.n;

    //printing data item of each node
    cout<<item0.n<<" ";
    cout<<item1.n<<" ";
    cout<<item2.n;

    return 0;

}
