#include"../include/Employee.h"
#include<cstdio>
void Employee:: acceptRecord(Employee *obj){
	printf("Name	:	");
	fflush(stdout);
	scanf("%s", obj->name);
	printf("Empid	:	");
	fflush(stdout);
	scanf("%d", &obj->empid );
	printf("Salary	:	");
	fflush(stdout);
	scanf("%f", &obj->salary );
}
void Employee:: printRecord(Employee *obj)
{
	printf("Emp_Name  :  %s\n", obj->name);
	fflush(stdout);
	printf("Emp_ID  : %d \n",obj->empid);
	fflush(stdout);
	printf("Emp_Salary  : %f \n",obj->salary);
	fflush(stdout);
}

