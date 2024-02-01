#include<iostream>
using namespace std;

class Test{
private:
	int num1; //Nonstatic//Instance variable
	int num2;  //Nonstatic//Instance variable
	static int num3; //static variable //class level

public:
	Test(){
		this->num1 = 10;
		this->num2 = 20;
		//this->num3 = 40; //not recommended cause for static data member per object memory gets created
	}                       // but main aim of static is only once memory and share that copy
	//Test const* this
	void setnum1(int n1){
        this->num1 = n1;
	}
	//Test const* this
	void setnum2(int n2){
		this->num2 = n2;
	}
	//No this pointer //static member function do not gets this pointer
	void static setnum3(int n3){
		Test::num3=n3;
	}
	void printrecord(){
        cout<<this->num1<<endl;
        cout<<this->num2<<endl;
        cout<<Test::num3<<endl;
	}
	//we can not accesss non static member functions inside static mumber function

	void static check(){
		cout<<Test::num3;
		//cout<<this->num1<<endl; //Error
		//cout<<this->num2<<endl; //Error
	}

	//To access non static memeber function function inside static member function
	//create object of the class inside static member function

	void static check1(){
		Test t1;
		cout<<t1.num1<<endl;
		cout<<t1.num2<<endl;
	 cout<<Test::num3<<endl;
	}
	void static check3(){
		cout<<"Static member functiomn on object"<<endl;
	}

};
int Test::num3=30;

int main(int argc, char **argv) {
//Test::check1();
Test t1;
t1.check3();  //we can call static member function on object
//t1.setnum1(100);
//t1.setnum2(200);
//
//t1.printrecord();


}


