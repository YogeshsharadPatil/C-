#include<iostream>
using namespace std;
int main(){
    //const int *const ptrnumber
    //Is same as
    //int const *const ptrnumber
  //  int n = 5;
  //    const int const *const ptr = &n;
   // using const multiple time is allowed but not recommended


    //ptrnumber is a constant variable which stores the address of the constant integger variable

    const int num = 5;
     int const * const ptrnum = &num;
    cout<<num<<endl;
    cout<<*ptrnum<<endl;
  // cout<<num+=5; //Not allowwed
 //cout<<*ptrnum+=10;  Not allowed
//  int num1 = 50;
//  int *const ptrnum = &num1;
//  cout<<ptrnum;
//  cout<<*ptrnum;

int *ptr2  = (int*)&num;
 *ptr2 = *ptr2 +5;
 cout<<*ptr2; //Uppredictyable behaviour


}