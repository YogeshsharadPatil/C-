
#ifndef INCLUDE_EMPLOYEE_H_
#define INCLUDE_EMPLOYEE_H_

class Employee {
public:
	char name[ 30 ];
	int empid;
	float salary;

public:
	void acceptRecord(Employee *obj);
	void printRecord(Employee *obj);
	Employee *ptremp;
};



#endif /* INCLUDE_EMPLOYEE_H_ */
