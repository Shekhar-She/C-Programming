//print sum of n numbers;
#include<stdio.h>
int sum(int n)
{
	return n+sum(n-1);
}
void main()
{
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	int a=sum(n);
	printf("%d",a);
}
