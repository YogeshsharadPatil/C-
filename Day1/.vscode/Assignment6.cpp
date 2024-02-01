#include <stdio.h>
#include<conio.h>
#include<string>

struct Employee {
  int empid;
  char name[30];
  int salary;
};

void accept(struct Employee *);
void display(struct Employee *);

int main(void) {
  struct Employee emp;
  struct Employee *e1=&emp;
  accept(e1);
  display(e1);

  return 0;
}

void accept(struct Employee *ptr) {

    printf("Enter details of Employee\n");
    printf("Enter ID: ");
    scanf("%d", &(ptr->empid));
    printf("Enter name: ");
   scanf("%s", &(ptr->name));
    printf("Enter Salary: ");
    scanf("%d", &(ptr->salary));
  }

void display(struct Employee *ptr) {
    printf("\nDetail of an Employee\n");
    printf("ID of Employee:%d \n",ptr->empid);
    printf("Name of Employee:%s \n",ptr->name);
    printf("Salary of Employee:%d \n",ptr->salary);


  }