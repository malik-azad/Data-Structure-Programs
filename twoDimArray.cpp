
#include <iostream>

using namespace std;


int main()
{
    int myArray[3][2];

    //initialize the array with values input by user

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"enter element at position "<<i+1<<","<<j+1 <<endl;
            cin>>myArray[i][j];
        }

    }


    // display the array values
    cout<<"you entered the following array"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {

            cout<<myArray[i][j];
            cout<<"  ";
        }

        cout<<endl;
    }


    return 0;
}




