#include<iostream>
using namespace std;

class Test{
private:
	int num1;
	int num2;
	int num3;
public:
	Test( int num1 = 0, int num2 = 0, int num3  = 0 ) ;

	void printRecord( void );

};

Test::Test( int num1, int num2, int num3 ) : num1( num1 ), num2( num2 ), num3( num3 ) {

}
void Test::printRecord( void ){
	cout << "Num1	:	" << this->num1 << endl;
	cout << "Num2	:	" << this->num2 << endl;
	cout << "Num3	:	" << this->num3 << endl;
}
int main( void ){
	Test t1;
	t1.printRecord( );

	Test t2( 50, 60, 70 );
	t2.printRecord( );
	return 0;
}
