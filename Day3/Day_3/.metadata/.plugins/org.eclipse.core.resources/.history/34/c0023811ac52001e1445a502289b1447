#include<cstdio>
//Global Structure
struct Employee{
	char name[ 30 ];
	int empid;
	float salary;
};

//Global function
void accept_record( struct Employee *const ptr ){	//Called function
	printf("Name	:	");
	scanf("%s", ptr->name );
	printf("Empid	:	");
	scanf("%d", &ptr->empid );
	printf("Salary	:	");
	scanf("%f", &ptr->salary );
}

//Global function
void print_record( struct Employee *const ptr ){	//Called function
	printf("Name	:	%s\n", ptr->name);
	printf("Empid	:	%d\n", ptr->empid);
	printf("Salary	:	%f\n", ptr->salary);
}

//Global function
int main( void ){	//Calling function
	struct Employee emp;

	accept_record( &emp );

	print_record( &emp );

	return 0;
}

int main1( void ){
	//Local Structure
	struct Employee{
		char name[ 30 ];
		int empid;
		float salary;
	};

	struct Employee emp;

	printf("Name	:	");
	scanf("%s", emp.name );
	printf("Empid	:	");
	scanf("%d", &emp.empid );
	printf("Salary	:	");
	scanf("%f", &emp.salary );

	printf("Name	:	%s\n", emp.name);
	printf("Empid	:	%d\n", emp.empid);
	printf("Salary	:	%f\n", emp.salary);

	return 0;
}
