#include<iostream>
using namespace std;
int main() {
//int []ptr1 = new int;  //Error
//cout<<ptr1<<endl;
//	int *ptr = new int; //garbage value;
//	cout << *ptr << endl;

//	int *ptr1 = new int();  //0
//	cout<<*ptr1<<endl;
//
//	int *ptr2 = new int(123);  //123
//	cout<<*ptr2<<endl;

	int *ptr = new int[5];
	for (int i = 0; i < 5; ++i) {
		cout<<"Enter"<<endl;
		cin>>ptr[i];
	}
	for (int i = 0; i < 5; ++i) {
		cout<<ptr[i]<<" ";
	}
/*
    delete ptr;
    delete ptr1;
    delete ptr2;*/

	delete[] ptr;
	return 0;
}
