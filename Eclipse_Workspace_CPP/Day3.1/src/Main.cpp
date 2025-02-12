#include<cstdio>

class Employee{
private:
	char name[ 30 ];
	int empid;
	float salary;
public:
	void acceptRecord( void );

	void printRecord( void );
};

void Employee::acceptRecord( void ){	//Member function
	printf("Name	:	");
	fflush( stdout);
	scanf("%s", name );
	printf("Empid	:	");
	fflush( stdout);
	scanf("%d", &empid );
	printf("Salary	:	");
	fflush( stdout);
	scanf("%f", &salary );
}

void Employee::printRecord( void ){	//Member function
	printf("Name	:	%s\n", name);
	fflush( stdout);
	printf("Empid	:	%d\n", empid);
	fflush( stdout);
	printf("Salary	:	%f\n", salary);
	fflush( stdout);
}

int main( void ){
	Employee emp;	//Here class Employee is instantiated and name of the instance is emp.

	emp.acceptRecord( );	//acceptRecord() function is called  on object emp;

	emp.printRecord( );		//printRecord() function is called  on object emp;

	return 0;
}



