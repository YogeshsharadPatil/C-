#include<iostream>
using namespace std;
class Test{
private:
	int num1;
	int num2;
	mutable int  count;
public:
	Test( void ) : num1( 0 ), num2( 0 ), count( 0 ){
		this->num1 = this->num1 + 10;	//10
		this->num2 = this->num2 + 20;	//20
	}
	//ClassName *const this
	void showRecord( /* Test *const this = &t1 */ ){
		this->num1 = this->num1 + 5;
		cout << "Num1	:	" << this->num1 << endl;	//15

		this->num2 = this->num2 + 5;
		cout << "Num2	:	" << this->num2 << endl;	//25

		cout << "Count	:	" << this->count << endl;	//0
	}
	//const ClassName *const this
	void printRecord( /* const Test *const this = &t1 */ ) const{
		//this->num1 = this->num1 + 5;	//Not OK
		cout << "Num1	:	" << this->num1 << endl;

		//this->num2 = this->num2 + 5;	//Not OK
		cout << "Num2	:	" << this->num2 << endl;

		this-> count = this->count + 1;
		cout << "Count	:	" << this->count << endl;
	}
};
int main( void ){
	Test t1;
	t1.showRecord();	//OK
	t1.printRecord( );	//OK

	const Test t2;
	//t2.showRecord );	//Not OK
	t2.printRecord( );	//OK

	Test t3;
	t3.showRecord();	//OK
	t3.printRecord( );	//OK
	return 0;
}
int main3( void ){
	Test t1, t2, t3;

	t1.printRecord( );
	t1.printRecord( );
	t1.printRecord( );

	t2.printRecord( );

	t3.printRecord( );
	t3.printRecord( );
	return 0;
}
int main2( void ){
	Test t1;
	t1.showRecord( );
	t1.printRecord( );
	return 0;
}
int main1( void ){
	int num1 = 10;
	int *const ptr1 = &num1;
	*ptr1 = 50;	//OK
	cout << "Num1	:	" << num1 << endl;
	cout << "Num1	:	" << *ptr1 << endl;	//OK

	const int num2 = 20;
	const int *const ptr2 = & num2;
	//*ptr2 = 60;	//Not OK
	cout << "Num2	:	" << num2 << endl;
	cout << "Num2	:	" << *ptr2 << endl;	//OK
	return 0;
}
