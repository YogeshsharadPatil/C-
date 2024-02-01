#include<cstdio>

namespace na{
	int num1 = 10;
}
namespace na{
	int num2 = 20;
}
int main( void ){
	printf("Num1	:	%d\n", na::num1);	//OK: 10
	printf("Num1	:	%d\n", na::num2);	//OK: 20
	return 0;
}
