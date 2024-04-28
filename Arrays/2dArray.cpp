#include<iostream>

using namespace std;


int main(){

   //creating 2D array "2D is collection of 1 d array stored in continues memory as 1 d array "
   int *p,i,j;
   int arr[3][3]={1,2,3,4,5,6,7,8,9};

   p = &arr[0][0];//assign base address to pointer

   for(i=0; i<9; i++)
   cout<<*(p+i)<<" "; //increment pointer each time 
   
return 0;

}

