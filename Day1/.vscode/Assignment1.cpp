
#include <stdio.h>

void SwapThreeNum(int* a, int* b, int* c)
{
	*a=*a+*b+*c;
	*b=*a-(*b+*c);
	*c=*a-(*b+*c);
	*a=*a-(*b+*c);
	
	// int temp = *b;
	// *b = *a;
	// *a = *c;
	// *c = temp;
}

int main()
{
	int a , b , c ;
    printf("Enter Thhree Numbers\n");
    scanf("%d %d %d",&a,&b,&c);


	printf("Value before swapping:\n");
	printf("a = %d \nb = %d \nc = %d\n", a, b, c);

	SwapThreeNum(&a, &b, &c);

	printf("Value after swapping:\n");
	printf("a = %d \nb = %d \nc = %d", a, b, c);

	return 0;
}
