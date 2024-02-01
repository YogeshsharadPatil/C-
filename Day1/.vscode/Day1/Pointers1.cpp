#include<iostream>
using namespace std;
int main(){
    int number = 5;
  //  int *ptrNumber; // Uninitialised pointer is called Wild Pointer
    int *ptrNumber = NULL;
  //   cout<<ptrNumber;
    ptrNumber = &number;
    printf("number : %d\n",number);
     printf("ptrNumber : %p\n",ptrNumber);
     printf("*ptrNumber : %d\n",*ptrNumber);
     //check for %u by later
     int num1 = 6;
     ptrNumber=&num1;
     cout<<*ptrNumber<<endl;
    

    *ptrNumber = number + num1;
    cout<<"This is Called deferencing: "<<*ptrNumber<<endl;
     
   



    
}