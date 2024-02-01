#include<cstring>
#include<iostream>
#include<iomanip>
using namespace std;

class Employee{
private:
	char name[ 30 ];
	int empid;
	float salary;
public:
	Employee( const char *name = "", int empid = 0, float salary  = 0.0f );

	void printRecord( void );
};
Employee::Employee( const char *name, int empid, float salary ) : empid( empid ), salary( salary ){
	strcpy( this->name, name);
}
void Employee::printRecord( void ){
	cout << "Name	:	" << this->name << endl;
	cout << "Empid	:	" << this->empid << endl;
	cout << "Salary	:	" << fixed << setprecision( 2 ) << this->salary<< endl;
}
int main( void ){
	Employee emp1;
	emp1.printRecord( );

	Employee emp2("Sandeep", 3778, 45000.50f);
	emp2.printRecord( );
	return 0;
}
