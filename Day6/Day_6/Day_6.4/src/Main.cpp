#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	Complex( void );

	Complex( int real, int imag );

	void printRecord( void );
};
Complex::Complex( void ){
	this->real = 0;
	this->imag = 0;
}

Complex::Complex( int real, int imag ){
	this->real = real;
	this->imag = imag;
}
void Complex::printRecord( void ){
	cout << "Real Number	:	" << this->real << endl;
	cout << "Imag Number	:	" << this->imag << endl;
}

int main( void ){

	return 0;
}
