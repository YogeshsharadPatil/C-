#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	Complex( void ){
		cout << "Inside ctor" << endl;
		this->real = 0;
		this->imag = 0;
	}

	Complex( int real, int imag ){
		cout << "Inside p-ctor" << endl;
		this->real = real;
		this->imag = imag;
	}
	void printRecord( void ){
		cout << "Real Number	:	" << this->real << endl;
		cout << "Imag Number	:	" << this->imag << endl;
	}
};
int main( void ){
	Complex arr[ 3 ] = { Complex( 10, 20 ), Complex( 30, 40 ), Complex( 50, 60 )};
	for( int index = 0;  index < 3; ++ index )
		arr[ index ].printRecord( );
	return 0;
}
int main2( void ){
	Complex arr[ 3 ];
	for( int index = 0;  index < 3; ++ index )
		arr[ index ].printRecord( );
	return 0;
}
int main1( void ){
	Complex arr[ 3 ];
	arr[ 0 ].printRecord( );
	arr[ 1 ].printRecord( );
	arr[ 2 ].printRecord( );
	return 0;
}
