#include<iostream>
using namespace std;

class Test{
private:
	const int number;
public:
	Test( void ) : number( 10 ){
		//this->number = 20;	//Ok
		//this->number = this->number + 10;	//Not OK
	}
	void showRecord( void ){
		//this->number = this->number + 2;	//Not OK
		cout << "Number	:	" << this->number << endl;
	}
	void displayRecord( void ){
		//this->number = this->number + 3;	//Not OK
		cout << "Number	:	" << this->number << endl;
	}
};
int main( void ){
	Test t;
	cout << sizeof( t ) <<endl;	//4
	return 0;
}
int main2( void ){
	Test t;
	t.showRecord( );	//12
	t.displayRecord( );	//15
	t.displayRecord( );	//18
	t.showRecord( );	//20
	return 0;
}
int main1( void ){
	const int number = 10;
	//number = number + 1;	// Not OK
	cout << "Number	:	" << number <<endl;
	return 0;
}
