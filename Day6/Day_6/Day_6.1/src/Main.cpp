#include<iostream>
using namespace std;

int main( void ){
	int num1 = 10;	//Initialization: OK
	//int num1 = 20;	//Not OK
	num1 = 20;	//Assignment
	num1 = 30;	//Assignment

	return 0;
}
int main2( void ){
	//extern int num1 = 10;	//Initialization: Not OK

	int num2 = 20;	//Initialization: OK

	return 0;
}
int main1( void ){
	extern int num1;	//Pure declaration

	int num2;	//Declaration as well as definition

	return 0;
}
