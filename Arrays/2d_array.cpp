#include<iostream>
#include<stdio.h>
using namespace std;


int main(){

   //creating 2D array "2D is collection of 1 d array stored in continues memory as 1 d array "
   int i,j;
   int arr[3][3]={1,2,3,4,5,6,7,8,9};


   //print array with address
   cout<<"\nArray Elememts wit Address\n";
   cout<<"\n     Col-0       Col-1        Col-2 \n";
   cout<<"-----------------------------------------\n";
   cout<<"-----------------------------------------\n";

   for(i=0; i<3; i++){
    for(j=0; j<3; j++)
        printf("%d  [%u] ",arr[i][j],&arr[i][j]);

        
        cout<<"\n";
   }
   cout<<"\r";

    return 0;
}