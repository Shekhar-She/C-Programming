//Permutation and combination.
#include<stdio.h>
int factn(int a)
{
	int i,muln=1;
	for(i=1;i<=a;i++)
	{
		muln=muln*i;
	}
	return muln;
}
int factr(int b)
{
	int mulr=1,i;
	for( i=1;i<=b;i++)
	{
		mulr=mulr*i;
	}
	return mulr;
}
int factnr(int c)
{
	int i,mulnr;
	for(i=1;i<=c;i++)
	{
		mulnr=mulnr*i;
	}
	return mulnr;
}
void main()
{
	int n,r;
	printf("Enter the Number of n:");
	scanf("%d",&n);
	printf("Enter the Number of r:");
	scanf("%d",&r);
	int fact_n=factn(n);
	printf(" Factorial of %d is:   %d \n",n,fact_n);
	int fact_r=factr(r);
	printf(" Factorial of %d is:   %d \n",r,fact_r);
	int fact_nr=factnr(n-r);
	printf("%d",fact_nr);
}
