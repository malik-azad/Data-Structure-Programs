#include<iostream>
using namespace std;

int main(){

 int sparceMatrix[5][6]={
                            {0,8,0,0,9,0},
                            {0,0,0,3,0,0},
                            {4,0,0,0,0,5},
                            {0,6,9,2,0,0},
                            {0,0,0,0,0,0}


 };

 //Finding Total Non-Zero  Elements
 int nonZeroVal= 0;
 for(int i=0; i<5; i++)
    for (int j = 0; j<6; j++){
       if(sparceMatrix[i][j]!=0){
           //cout<<sparceMatrix[i][j]<<" ";
            nonZeroVal++;
         }
    }

    cout<<"Non-Zero Elements : "<<nonZeroVal<<endl;

   //Defining triplet Matrix
   //3 x p , (3-> row, col, value) (p->non_zero elements)
    
   int tripletMatrix[3][nonZeroVal];
    
   // //Generate Triplet Matrix

    int k=0;
   for(int i=0; i<5; i++){
      for(int j=0; j<6; j++){
         if(sparceMatrix[i][j] != 0){
           
            tripletMatrix[0][k]=i;
            tripletMatrix[1][k]=j;
            tripletMatrix[2][k]=sparceMatrix[i][j];
            k++;
         }
      }
   }

 

   //Display Triplet Matrix

    cout << "Triplet Matrix (Row, Column, Value):" << endl;
    for(int col = 0; col < nonZeroVal; col++) {
        cout  << tripletMatrix[0][col] << " " << tripletMatrix[1][col] << " " << tripletMatrix[2][col] << endl;
    }


    return 0;
}