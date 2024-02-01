#include<iostream>
using namespace std;

void sum(int num1,int num2){   //_zsumii (Mangled name)
	 int result = num1+ num2;   // compiler internsally generates mangling name
	 cout<<result <<endl;

}
////parameter type same but different numbers of arguments
//void sum(int num1,int num2,int num3){   // _zsumiii
//	 int result = num1+ num2 +  num3;
//	 cout<<result<<endl;
//}
//parameter type different but same  numbers of arguments
void sum(int num1,int num2,double num3){  // _zsumiid
	 int result = num1+ num2 +  num3;
	 cout<<result<<endl;
}
//parameter type same , same number of arguments but parameter order is different
void sum(int num1,double num3,int num2){
	 int result = num1+ num2 +  num3;
	 cout<<result<<endl;
}

//default value for any paramter u can put in this case 0 is default value to num4
void sum(int num1,int num2,int num3 ,int num4 = 100){   // _zsumiii
	 int result = num1+ num2 +  num3 + num4;
	 cout<<result<<endl;
}//

//int sum(int num1,int num2){ // It will show the error
//	int result = num1+num2;  // redefination of sum
//	return result;           // by co9nsidering only return type u can not give same name to the function
//}

// caching value of function is optional so only return type of function is not considered for overloading


//void sum(int num1){
//	cout<<num1<<endl;
//}
//void sum(float num1){
//	cout<<num1<<endl;
//}

int main(){
	// Concept of operator overloading
	 sum(5,10);
	 sum(5,10,20);
	 sum(5,10,20.5);
	 sum(5,20.5,10);



//	//overloading twister IQ
//	sum(10);   //10
//	//sum(10.5);   //call to sum is ambigious
//	sum(10.5f); //10.5


}



