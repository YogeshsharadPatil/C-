
#include <stdio.h>
int main()
{
	int a , b;
   printf("Enter Two Numbers\n");
    scanf("%d %d",&a,&b);

    int *ptr1 = &a;
    int *ptr2 = &b;

   int sum = *ptr1 + *ptr2;
   printf("Addition of %d and %d is %d \n",*ptr1,*ptr2,sum);

	return 0;
}
