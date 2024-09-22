//printf Hello World n times.
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the Number:");
	scanf("%d",&n);
	for( i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d \n ",i);
		}
	}
}
