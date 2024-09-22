//fabonic series with using Recursion.
#include<stdio.h>
int fibo(int n)
{
	if(n==1 || n==2) return 1;
	return fibo(n-1)+fibo(n-2);
}
void main()
{
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	int ans=fibo(n);
	printf("%d",ans);
}
