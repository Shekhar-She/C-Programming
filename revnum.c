#include<stdio.h>
void revnum(int n)
{
	if(n==0) return;
	printf("%d \n ",n);
	revnum(n-1);
	return;

}
void main()
{
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	revnum(n);
	
}
