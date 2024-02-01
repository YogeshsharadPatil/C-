#include<cstdio>

namespace na{
	int num1 = 10;
	int num2 = 20;
}
namespace na{
	//int num1 = 30;	//error: redefinition of 'num1'
	int num3 = 30;
}

int main( void ){
	printf("Num1	:	%d\n", na::num1);	//OK: 10
	printf("Num2	:	%d\n", na::num2);	//OK: 20
	printf("Num3	:	%d\n", na::num3);	//OK: 30
	return 0;
}
