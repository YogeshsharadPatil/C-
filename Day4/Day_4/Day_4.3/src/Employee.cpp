#include<iostream>
using namespace std;
#include"../include/Employee.h"
using namespace nemployee;
void Employee::acceptRecord( void ){	//Member function
	cout << "Name	:	";
	cin >> name ;
	cout << "Empid	:	";
	cin >> empid ;
	cout << "Salary	:	";
	cin >> salary ;
}

void Employee::printRecord( void ){	//Member function
	cout << "Name	:	" << name << endl;
	cout << "Empid	:	" << empid << endl;
	cout << "Salary	:	" << salary << endl;
}
