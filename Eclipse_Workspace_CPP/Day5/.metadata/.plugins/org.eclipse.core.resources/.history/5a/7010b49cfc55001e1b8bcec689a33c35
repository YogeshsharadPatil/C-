#include<iostream>
using namespace std;

void sum(int num1,int num2){
	 int result = num1+ num2;
	 cout<<result <<endl;

}
//parameter type same but different numbers of arguments
void sum(int num1,int num2,int num3){
	 int result = num1+ num2 +  num3;
	 cout<<result<<endl;
}
//parameter type different but same  numbers of arguments
void sum(int num1,int num2,double num3){
	 int result = num1+ num2 +  num3;
	 cout<<result<<endl;
}
//parameter type same , same number of arguments but parameter order is different
void sum(int num1,double num3,int num2){
	 int result = num1+ num2 +  num3;
	 cout<<result<<endl;
}
//int sum(int num1,int num2){ // It will show the error
//	int result = num1+num2;  // redefination of sum
//	return result;           // by co9nsidering only return type u can not give same name to the function
//}


int main(){
	// Concept of operator overloading
	 sum(5,10);
	 sum(5,10,20);
	 sum(5,10,20.5);
	 sum(5,20.5,10);
}



