
#include <stdio.h>
int main()
{
	int a , b;
   printf("Enter Two Numbers\n");
    scanf("%d %d",&a,&b);

    int *ptr1 = &a;
    int *ptr2 = &b;

    if(* ptr1 > *ptr2 ){
        printf(" %d is the maximum number\n",*ptr1);
    }else if(*ptr1 < *ptr2 ){
        printf(" %d is the maximum number.\n\n",*ptr2);
    }else{
        printf("Both are equal");
    }

	return 0;
}
