#include<stdio.h>
#include<string.h>
struct Employee
{
        char name[30];
        int empid;
        float salary;

};
void inputEmpData(struct Employee *a ){
    printf("Enter employee name , id, salary: \n");
  scanf("%s\n",(&a->name));
  scanf("%d\n",(&a->empid));
  scanf("%f\n",(&a->salary));
}

void displayEmpData(struct Employee *b){
   
      printf("%s\n",b->name);
         printf("%d\n",b->empid);
            printf("%f\n",b->salary);
}
int main(){

struct Employee e;
struct Employee *p = &e;

void inputEmpData(struct Employee *p );
void displayEmpData(struct Employee *p);

inputEmpData( p );
displayEmpData( p);

    return 0;
}