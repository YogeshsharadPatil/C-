#include<cstdio>

namespace na{
	int num1 = 10;
}
int main( void ){
	printf("Num1	:	%d\n", na::num1);
	namespace nb = na;	//Alias
	printf("Num1	:	%d\n", nb::num1);
	return 0;
}
