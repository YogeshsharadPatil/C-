#include<cstdio>

void print_message( ){
	printf("Good Evening!!\n");
}
int main( void ){
	print_message( );	//OK

	::print_message( );	//OK
	return 0;
}
int num1 = 10;	//Global Variable
int main3( void ){
	int num1 = 20;	//Local variable
	printf("Num1	:	%d\n", ::num1);	//10
	printf("Num1	:	%d\n", num1);	//20

	{//Start of block
		int num1 = 30;
		printf("Num1	:	%d\n", ::num1);	//10
		printf("Num1	:	%d\n", num1);	//30
	}
	return 0;
}

int main2( void ){
	int num1 = 20;	//Local variable
	printf("Num1	:	%d\n", ::num1);	//10
	printf("Num1	:	%d\n", num1);	//20
	return 0;
}


int main1( void ){
	int num1 = 20;	//Local variable
	//int num1 = 20;	// error: redefinition of 'num1'
	printf("Num1	:	%d\n", num1);	//20
	return 0;
}
