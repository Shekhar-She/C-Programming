// Swap Two Numbers:
#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter the First Number is :");
	scanf("%d",&a);
	printf("Enter the second Number is:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("The Value of a is:%d \n",a);
	
	printf("The Value of b is:%d",b);	
}
