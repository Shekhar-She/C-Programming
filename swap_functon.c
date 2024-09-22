#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter the Number of a is %d:",a);
	scanf("%d",&a);
	printf("Enter the Second Numer of b is %d:",b);
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("Ater Swapping of a is %d \n", a);
	printf("After swapping of b is %d:",b);
	
}
