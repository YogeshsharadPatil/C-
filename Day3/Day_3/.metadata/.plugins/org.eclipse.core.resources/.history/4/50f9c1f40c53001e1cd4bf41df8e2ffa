#include<cstdio>


namespace na{
	int num1 = 10;
}

namespace nb{
	int num1 = 20;
}
int main( void ){
	using namespace na;
	printf("Num1	:	%d\n", num1 );	//10

	using namespace nb;
	//printf("Num1	:	%d\n", num1 );	//error: reference to 'num1' is ambiguous
	printf("Num1	:	%d\n", nb::num1 );	//10
	return 0;
}
