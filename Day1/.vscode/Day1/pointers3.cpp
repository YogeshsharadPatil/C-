#include<iostream>
using namespace std;
int main(){

  //2.const int *ptr
  //is same as
  //1. int const *ptr 
  
 
  //This is pointer variable Which stores address of Constant integer variable
  const int *ptrnum1 = NULL;
  int const num1 = 5;

 // num1=num1+5; Not Ok
 //*ptrnum1 = 6; //not Allowed

int num2=10;
ptrnum1=&num2;
cout<<*ptrnum1<<endl;
    
}