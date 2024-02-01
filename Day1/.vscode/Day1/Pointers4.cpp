#include<iostream>
using namespace std;
int main(){
    //int *const ptrNumber

    //int *ptrnumber const : INVALID SYANTAX

    // ptrNumber is a constant pointer variable which can store the non constant integer variable
    //after the '*' const is came then its for ptrvariable
    int number = 5;
    int *const ptrnumber = &number;
    cout<<number<<endl;
    cout<<ptrnumber<<endl;
    int number2 = number  + 5;
    cout<<number2<<endl;
    cout<<*ptrnumber<<endl;

    cout<<"you can not store the value of another variable in ptrnumber cause its a const pointer variable"<<endl;

    //ptrnumber=&number2;

   *ptrnumber=*ptrnumber + 30;
   cout<<*ptrnumber<<endl;
   cout<<number;

}