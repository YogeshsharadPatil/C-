#include<cstdio>

class Employee{
private:
	//Data member / property / field / attribute
	char name[ 30 ];
	int empid;
	float salary;
public:
	void acceptRecord( void ){	//Member function
		printf("Name	:	");
		scanf("%s", name );
		printf("Empid	:	");
		scanf("%d", &empid );
		printf("Salary	:	");
		scanf("%f", &salary );
	}

	void printRecord( void ){	//Member function
		printf("Name	:	%s\n", name);
		printf("Empid	:	%d\n", empid);
		printf("Salary	:	%f\n", salary);
	}
};

int main( void ){

	Employee emp;

	//:: is called as scope resolution operator

	emp.Employee::acceptRecord( );	//OK

	emp.Employee::printRecord( );	//OK

	return 0;
}
int main2( void ){
	Employee emp;	//Here class Employee is instantiated and name of the instance is emp.

	emp.acceptRecord( );	//acceptRecord() function is called  on object emp;

	emp.printRecord( );		//printRecord() function is called  on object emp;

	return 0;
}
int main1( void ){	//Calling function

	//class Employee emp;	//OK

	Employee emp;	//Here class Employee is instantiated and name of the instance is emp.
	//Employee: class
	//emp: Object

	emp.acceptRecord( );	//acceptRecord( &emp );

	emp.printRecord( );		//printRecord( &emp );

	return 0;
}
