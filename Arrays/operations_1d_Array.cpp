#include<iostream>
using namespace std;


//creating function for traversing an array 

void traversing(){
    //creating an array of five elements 
    int arr1[5];
    
    cout<<"Enter 5 elements\n";
    for(int i=0; i<5; i++)
    cin>>arr1[i];


    ////OPERATIN 1 --- TRAVERSING-- meaning to visiting each elements
    cout<<"Entered Array : \n";

     for(int i = 0; i <5; i++)
     cout<<arr1[i]<<" ";

}

//creaing function for delete an element in array
void deleteElement(){

    //creaing array of 20 elements initialize with 0
    int arr2[20]={0};
    int n;
    
    //take size of array from user
    cout<<"Enter how many elements you want to Enter\n";
    cin>>n;

   //take elements from user
    cout<<"Enter "<<n<< " Elements \n";
    for(int i=0; i<n; i++)
    cin>>arr2[i];



    //print those elements that user have entered
    cout<<"You Enter : \n";
     for(int i = 0; i <n; i++)
     cout<<arr2[i]<<" ";
     
    

    int p; //varable for storing postion 
     //Enter postion  you at you want to Delete
     cout<<"\nenter Postition where you want to delete : ";
     cin>>p;
     p--;
 
     //logic for deleting 
     for(int i=0; i<n; i++){
        if(i>=p) //when we reach that position we put next value to next positon and continure
          arr2[i] = arr2[i+1]; 
     }
   
    //printing after deletion 
    cout<<"\nAfter deleting \n";
    for (int i=0; i < n; i++){
        if(arr2[i] !=0)  //print until we reach 0
         cout<<arr2[i]<<" ";
    }   

}


//creaing function for Insert an element in array
void insertElement(){

    //creaing array of 20 elements initialize with 0
    int arr2[20]={0};
    
    int z =1;
   // set 1,2,3,4,5 in array using z varable 
    for(int i=0; i<5; i++){
    arr2[i]= z;
    z++;
    }


    
    cout<<"Array Elements are : \n";
     for(int i = 0; i <5; i++)
     cout<<arr2[i]<<" ";
     
    

     int p,ele; //varable for storing postion and element 
     //Enter position and element 
     cout<<"\nenter Postition and Element for Inseration : ";
     cin>>p>>ele;
     p--;
 
     //logic for Inseration
     int i;
     for(i=5; i!=p; i--)
       arr2[i] = arr2[i-1];

    arr2[i]=ele;
   

    //printing after Inseration
    cout<<"\nAfter deleting \n";
    for (int i=0; i <=5; i++){
        if(arr2[i] !=0)  //print until we reach 0
         cout<<arr2[i]<<" ";
    }   

}

//function for searching an element in array 
 void searching(){
         int arr2[20]={0};
    
    int z =1;
   // set 1,2,3,4,5 in array using z varable 
    for(int i=0; i<5; i++){
    arr2[i]= z;
    z++;
    }
   cout<<"total elements in array are "<<5<<"\n";

   int ele;

   cout<<"\nenter  Element you want to search : ";
     cin>>ele;
  
int i;
 for(i=0; i<5; i++){
    if(arr2[i]==ele)
        break;
    }

  if(arr2[i]==ele)
        cout<<"Found\n";
  else
   cout<<"Not Found";

 }


//merging two arrays "mergin at alternative positions "
void merging(){
        
         int arr1[5]={1,2,3,4,5};
         int arr2[5]={6,7,8,9,10};

         int resultArray[10];
    
    cout<<"\nElements of array 1 : ";
    for(int i=0; i<5; i++){
       cout<<arr1[i]<<" ";
    }
  
    cout<<"\nElements of array 2 : ";
     for(int i=0; i<5; i++){
       cout<<arr2[i]<<" ";
    }

    //logic for merging array1 and array2 and put in resultArray
    //shorting elements in alernating positions
    int i=0,k=0,h=0;
    while (i<10){
      if(i%2==0)
        resultArray[i]=arr1[k++];
      else
        resultArray[i]=arr2[h++];

      i++;
    }
    
      cout<<"\nResult array  : ";
     for(int i=0; i<10; i++){
       cout<<resultArray[i]<<" ";
    }



 }

//sorting one of the easiest sort
 void sortArray(){
      

        int arr1[5]={4,6,1,3,2};
        int i;
    
    cout<<"\nElements before sorting : ";
    for(int i=0; i<5; i++){
       cout<<arr1[i]<<" ";
    }
    

    int sum=0;
    for(int i=0; i<5; i++){
      sum =sum + arr1[i];
    }

    cout<<"\n Sum of array: "<<sum;

  cout<<"\n After sorting : ";
    //logic for sorting  and pring elements also 
    for(int k=0; k<sum; k++){
       for(i=0; i<5;i++){
        if(arr1[i]==k)
        cout<<arr1[i]<<" ";
       }
    }


 }


int main(){
    //calling traversing array
       //traversing();
    
    //calling deleteElement function
      // deleteElement();
    
    //calling insertElement function
        //insertElement();
    
    //calling searching function
        //searching();
 

    //calling merging function
        //merging();

    //calling sorting function 
      sortArray();
    return 0;
}