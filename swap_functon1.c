#include<stdio.h>
int swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	return a,b ;
}
void main()
{
	int a,b,ret;
	printf("Enter the firsst Number:");
	scanf("%d",&a);
	printf("Enter the Second Number:");
	scanf("%d",&b);
	ret=swap(a,b);
	printf("%d",ret);
}
