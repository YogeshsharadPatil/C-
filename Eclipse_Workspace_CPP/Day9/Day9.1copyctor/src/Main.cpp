#include<iostream>
using namespace std;
class Complex {
private:
	int real;
	int img;
public:
	Complex() :real(0), img(0) {}
	//Complex const *this
	Complex(int real, int img) {
		cout<<"Parameterised"<<endl;
		this->real = real;
		this->img = img;
	}
	//1)Copy Constructor
	//Complex const *this
	Complex(const Complex &other){
		cout<<"shallow Copy = only Copy "<<endl;
		this->real = other.real;   //shallow copy
		this->img = other.img;     //shallow copy
	}

	//1)Copy Constructor
	//Complex const *this
/*	Complex(const Complex &other){
		cout<<"Deep Copy = Copy + Modify"<<endl;
		this->real = other.real + 5;   //deep copy //copy + modification
		this->img = other.img + 5;     //deep copy
	}
*/

	void printRecord(){
		cout<<"Real:  "<<this->real<<endl;
		cout<<"Img:  "<<this->img<<endl;
	}
	//Complex &other = &c2
	//Complex *this = c1
	Complex sum(Complex &other){
		Complex result;
		result.real = this->real + other.real;
		result.img = this->img + other.img;
		return result;
	}

};

int main() {
	Complex c1(10,20); //parameterised
	Complex c2(30,40);//parameterised
	Complex c3 = c1.sum(c2);
	c3.printRecord();
	//first we are calling member function on c1 so c1 gets this pointer
	//we are passing c2 as a argument so on other copy constructor gets called on c2
	//c1.sum(c2);  whole return object as a result
	//that object is gets copied on c3
	return 0;
}
int main1() {
	Complex c1(10,20); //parameterised
	c1.printRecord();
	Complex c2 = c1;  //copy constructor gets called on c2
	c2.printRecord();
	return 0;
}

