#include<cstdio>

int main( void ){
	extern int num1;
	printf("Num1	:	%d\n", num1);

	//extern int num2;	//Not OK
	//printf("Num2	:	%d\n", num2);
	return 0;
}
