#include<iostream>
#include<string>
using namespace std;

class Person{
private:
	string name;
	int age;
public:
	Person(){
		cout<<"Person parameterless"<<endl;
		this->name = "Name: ";
		this->age = 22;
	}
	Person(string name, int age){
		cout<<"Person Paramterised";
		this->name = name;
		this->age = age;
	}
	void showRecord(){
         cout<<this->name<<endl;
         cout<<this->age<<endl;
	}

};
class Employee:public Person{
private:
	int empid;
	float salary;
public:
	Employee(void){
		cout<<"Employee parameterless"<<endl;
		this->empid = 1;
		this->salary = 1000.00;
	}
	Employee(int empid,int salary){
		cout<<"Employee Paramterised";
		this->empid = empid;
		this->salary = salary;
	}
	Employee(string name,int age,int empid,float salary): Person(name,age){
		this->empid = empid;
		this->salary =  salary;
	}
	void showRecord(){
		Person::showRecord();
		cout<<this->empid<<endl;
		cout<<this->salary<<endl;
	}

};

int main(){
	//Person p1;  //by default parameter constructor gets called
	//p1.showRecord();
	Employee e1("Ysh",23,1,500);
	e1.showRecord();
	return 0;
}



