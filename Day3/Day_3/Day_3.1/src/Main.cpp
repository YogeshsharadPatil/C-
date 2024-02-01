#include<cstdio>
#include<cstring>
#include<cstdlib>
int main( void ){
	struct Employee{
		char name[ 30 ];
		int empid;
		float salary;
	};
	//struct Employee emp1, emp2, emp3;	//OK

	struct Employee emp1;	//OK
	struct Employee emp2;	//OK
	struct Employee emp3;	//OK

	//struct Employee arr[ 3 ];	//OK

	return 0;
}
int main6( void ){
	struct Employee{
		char name[ 30 ];
		int empid;
		float salary;
	};
	struct Employee emp;	//Static memory allocation
	struct Employee *ptr = &emp;

	strcpy(ptr->name, "Sandeep" );
	ptr->empid = 33;
	ptr->salary = 45000.56f;
	return 0;
}
int main5( void ){
	struct Employee{
		char name[ 30 ];
		int empid;
		float salary;
	};

	struct Employee emp;	//Static memory allocation
	strcpy(emp.name, "Sandeep" );
	emp.empid = 33;
	emp.salary = 45000.56f;


	struct Employee *ptr  = ( struct Employee* )malloc( sizeof( struct Employee ) );	//Dynamic memory allocation
	strcpy(ptr->name, "Sandeep" );
	ptr->empid = 33;
	ptr->salary = 45000.56f;
	free( ptr );
	return 0;
}
int main4( void ){
	struct Employee{
		char name[ 30 ];
		int empid;
		float salary;
	} emp1;	//Here emp1 is object

	struct Employee emp2;

	return 0;
}
int main3( void ){
	typedef struct Employee{
		char name[ 30 ];
		int empid;
		float salary;
	}Employee_t;	//Here Employee_t is alias for struct Employee
	Employee_t emp;	//Object
	Employee_t *ptr;	//pointer
	return 0;
}
int main2( void ){
	struct Employee{
		char name[ 30 ];
		int empid;
		float salary;
	};
	typedef struct Employee Employee_t;

	Employee_t emp;	//Object
	Employee_t *ptr;	//pointer
	return 0;
}
int main1( void ){
	struct Employee{
		char name[ 30 ];
		int empid;
		float salary;
	};

	struct Employee emp;	//Object
	struct Employee *ptr;	//pointer
	return 0;
}
